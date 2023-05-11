#include <iostream>
#include <limits>

int main() {
    char resposta = '\0';
    while (true) 
    {
        std::cout << "Digite S para sim ou N para nao: ";
        std::cin.get(resposta);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (resposta == '\0' || resposta == '\n') 
        {
            std::cout << "Voce nao nos informou sua resposta. Tente novamente." << std::endl;
        }
        else if (resposta == 'S' || resposta == 's') 
        {
            std::cout << "Legal poder contar com sua participacao no nosso jogo. " << std::endl;
            std::cout << "Seja muito bem vindo. *---------------*" << std::endl;
            break;
        }
        else if (resposta == 'N' || resposta == 'n') 
        {
            std::cout << "Ah que pena, nos vemos em outra hora entao! " << std::endl;
            std::cout << "Bye bye. Saindoooooooooooooooooooooooo!" << std::endl;
            exit(0);
        }
    }

    std::string nome;
    while (nome.empty())
    {
        std::cout << "Qual eh o seu nome? " << std::endl;
        std::getline(std::cin, nome);
        std::cout << "\n\n";

        if (nome.empty())
        {
            std::cout << "Voce nao nos informou o seu nome, tente novamente: " << std::endl;
        }
        else 
        {
            std::cout << "Olah " << nome << ". Muito bom te ter por aqui! " << std::endl;
            std::cout << "Seja bem vindo ao nosso jogo da adivinhacao" << std::endl;
            std::cout << "Vamos comecar..... " << std::endl;
        }
    }    

    return 0;
}
