# Threads Base
Esta implementação é uma estruta de base para desenvolver aplicações em conteiners usando multi threads, se o conteiner "Control" como exemplo para desenvolver suas aplicações. <br>

Caso seja criado novos conteiners não se esqueça de declarar o caminho de tedos os arquivos .cpp e .h no CMakeList.txt para que sejam compilados e vinculados ao executável VIDA.<br>

Caso seja usada bibliotecas externas também é necessário fazer a vinculção ao execultável no CMakeList.txt.


# Requisitos de software
1- Ter um compilador c++ instalado <br>
2- Ter o cmake instalado<br>


# Instruções para executar um programa
1- cmake -S src -B build -----------------Identificar as pastas src e build <br>
2- cd build ------------------------------Acessa diretorio build <br>
3- make ----------------------------------Compilar <br>
4- ./vida --------------------------------Executar <br>

*Caso não funcione é so excluir a pasta build e repetir o processo*


