cmake_minimum_required(VERSION 3.15) #versão minima do CMake necessária para construir o projeto
project(nlmt CXX) #define o nome do projeto como nlmt e especifica que será escrito em c++

add_executable(vida) #cria o executável vida

#Procura pelo pacote Threads. Este pacote fornece suporte para multithreading em projetos CMake.
find_package (Threads)

#Liga as bibliotecas Threads e "rt" ao executável "vida".
target_link_libraries(vida
    ${CMAKE_THREAD_LIBS_INIT}
    rt    
    crypt
)

#associa os arquivos fontes um ao execultavel vida
target_sources(
    vida

    PRIVATE
        
        main.cpp        

        #Files
        Files/DefinePin.h
        Files/Struct_sensors.h        

        #Control
        Containers/Control/Control.cpp
        Containers/Control/Control.h     
        
        #memoria compartilhada
        Utils/PosixShMem/PosixShMem.cpp
        Utils/PosixShMem/PosixShMem.h

        #ThreadBase
        Utils/ThreadBase/ThreadBase.cpp
        Utils/ThreadBase/ThreadBase.h

        #Tempo
        Utils/road_time.h        
)