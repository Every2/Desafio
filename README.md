# Desafio

Desafios propostos pra vaga da empresa intelitrader.

Estou usando o GCC na versão `13.2.1` com o C++ na versão `20`, mas qualquer versão a partir da `11`  já consegue rodar o codigo.

Para baixar o compilador gcc no seu sistema operacional siga as instruções:

Principais distribuições Linux:
```shell
//Ubuntu/Debian
sudo apt install gcc

//Arch
sudo pacman -S gcc

//Fedora
sudo dnf install gcc
```

No Windows, você precisará do MinGW para usar o G++:
[Nesse caso, siga o tutorial](https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites)


Para compilar, use os comandos:
```shell
//caso queira o C++20 por padrão:

g++ -std=c++20 desafioum.cpp -o desafioum
g++ -std=c++20 desafiodois.cpp -o desafiodois
./desafiodois

//Caso não, use:
g++ desafioum.cpp -o desafioum
g++ desafiodois.cpp -o desafiodois
./desafiodois
```