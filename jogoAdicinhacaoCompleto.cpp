#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>



std::string obterSelecaoAleatoria() {
    std::string selecoes[] = {"Brasil", "Alemanha", "Argentina"};
    int indiceAleatorio = sizeof(selecoes) / sizeof(selecoes[0]);
    return selecoes[rand() % indiceAleatorio];
}

void jogoAdivinhacao() {
    std::string resposta;
    while (resposta.empty()) {
        std::cout << "Quer jogar o jogo da adivinhacao? (Digite 'sim' para jogar e nao para sair.): ";
        std::getline(std::cin, resposta);

        if (resposta.empty()) {
            std::cout << "Voce nao digitou nada." << std::endl;
        }
    }

    if (resposta == "sim" || resposta == "Sim") {
        std::string nome;
        std::cout << "Qual eh o seu nome: ";
        std::getline(std::cin, nome);
        std::cout << "Olah: " << nome  <<  ", seja bem vindo ao jogo da adivinhacao do LP. "<< std::endl;

        int nivelDificuldade;
        std::cout << "Escolha o nivel de dificuldade (1 - Facil, 2 - Medio, 3 - Dificil): ";
        std::cin >> nivelDificuldade;
        std::cin.ignore();

        int chances = (nivelDificuldade == 1) ? 10 : (nivelDificuldade == 2) ? 7 : (nivelDificuldade == 3) ? 5 : 0;

        std::cout << "Vamos jogar! Adivinhe o nome de uma selecao de futebol." << std::endl;
        std::string selecao = obterSelecaoAleatoria();
        int numLetras = selecao.size();

        std::string palpite;
        std::string respostaParcial(numLetras, '_');

        while (chances > 0) {
            std::cout << "Palavra parcial: " << respostaParcial << std::endl;
            std::cout << "Chances restantes: " << chances << std::endl;

            std::cout << "Qual e o seu palpite? Digite uma letra: ";
            std::getline(std::cin, palpite);

            if (palpite.empty()) {
                std::cout << "Voce nao digitou nada." << std::endl;
                continue;
            }

            bool letraEncontrada = false;
            for (int i = 0; i < numLetras; ++i) {
                if (selecao[i] == palpite[0]) {
                    respostaParcial[i] = palpite[0];
                    letraEncontrada = true;
                }
            }

            if (respostaParcial == selecao) {
                std::cout << "Parabens, voce acertou! O nome da selecao e " << selecao << "." << std::endl;
                return;
            }

            if (!letraEncontrada) {
                std::cout << "Tente novamente. A letra '" << palpite << "' nao esta no nome da selecao." << std::endl;
                --chances;
            }
        }

        std::cout << "Suas chances acabaram. O nome da selecao era: " << selecao << std::endl;
    } else {
        std::cout << "Ah que pena, nos vemos em uma outra hora entao. " << std::endl;
        std::cout << "Bye, saindooooooooo!" << std::endl;
    }
}

int main() {
    jogoAdivinhacao();
    return 0;
}
