#include <iostream>

int main() {
    char resposta = '\0';
    while (true) {
        std::cout << "Digite S para sim ou N para nao: ";
        std::cin.get(resposta);

        if (resposta == '\0' || resposta == '\n') {
            std::cout << "Voce nao nos informou sua resposta. Tente novamente." << std::endl;
        }
        else if (resposta == 'S' || resposta == 's') {
            std::cout << "Legal poder contar com sua participacao no nosso jogo. " << std::endl;
            std::cout << "Seja muito bem vindo. *---------------*" << std::endl;
            break;
        }
        else if (resposta == 'N' || resposta == 'n') {
            std::cout << "Ah que pena, nos vemos em outra hora entao! " << std::endl;
            std::cout << "Bye bye. Saindoooooooooooooooooooooooo!" << std::endl;
            exit(0);
        }
    }
        std::cout << "Seja bem vindo ao nosso jogo da adivinhacao" << std::endl;

    return 0;
}
