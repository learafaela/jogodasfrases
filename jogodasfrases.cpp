#include <iostream>

using namespace std;

int main()
{
    int tamanhoMaximoVetor = 100;
    int corDasCoisas, diaDeAlgumaCoisa, mesAleatorio;
    string resultadoCorDasCoisas, resultadoDiaDeAlgumacoisa, resultadoMesAleatorio;

    string corCamisa[tamanhoMaximoVetor] = {
        "Preto",
        "Branco",
        "Vermelho",
        "Azul",
        "Verde",
        "Amarelo",
        "Roxo",
        "Cinza",
        "Marrom",
        "Laranja",
        "Rosa",
        "Bege",
        "Turquesa",
        "Vinho",
        "Azul marinho",
        "Lilás",
        "Dourado",
        "Camisa de time",
        "Outros",
        "Sem camisa"};

    string corVetor[tamanhoMaximoVetor] = {
        "O Jonh Wick",
        "A Hermione Granger",
        "O Goku",
        "o Gino e Geno",
        "O Bruce Wayne",
        "O Thomas Shelby",
        "O Hank Pym",
        "A Dilma",
        "O Homer Simpsom",
        "A Sarah Connors",
        "O Jackie Chan",
        "O Dalai-lama",
        "O Magneto",
        "o Eddy Murph",
        "O Lula",
        "o Bolsonaro",
        "Sargento Fahur",
        "O Donald Trump",
        "O MiChael Jackson",
        "O Walt Disney"};

    string diaVetor[tamanhoMaximoVetor] = {
        "Armadura de Homem de Ferro",
        "Uniforme de Hogwarts",
        "Capa do Batman",
        "Traje do Homem-Aranha",
        "Vestido da Elsa",
        "Túnica Jedi de Star Wars",
        "Vestido da Mulher Maravilha",
        "Roupa de Superman",
        "Kimono do Goku",
        "Traje de pirata do Jack Sparrow",
        "Traje tradicional hanbok",
        "Uniforme escolar coreano",
        "Terno e gravata elegante",
        "Vestido de noiva coreano",
        "Roupa casual de um herói de dorama",
        "Uniforme militar coreano",
        "Vestido de gala em um evento de dorama",
        "Roupa de policial coreano",
        "Vestimenta de CEO de dorama",
        "Roupa de médico em hospital coreano",
        "Uniforme do Barcelona",
        "Uniforme do PSG",
        "Camisa da seleção brasileira",
        "Uniforme do Manchester United",
        "Uniforme do Real Madrid",
        "Uniforme do SENAI",
        "Camisa de treino de futebol",
        "Agasalho de futebol para aquecimento",
        "Roupa de goleiro completa",
        "Uniforme da seleção argentina",
        "Uniforme do Chelsea"};

    string mesVetor[tamanhoMaximoVetor] = {
        "Karl Marx",
        "Joseph Stalin",
        "Vladimir Lenin",
        "Fidelis Reis",
        "Rainha Elizabeth I",
        "Che Guevara",
        "Albert Einstein",
        "Napoleão Bonaparte",
        "Marie Curie",
        "Nelson Mandela",
        "Mahatma Gandhi",
        "Cleópatra"};

    cout << "Bem vindo(a) ao criador de frases para aprendizado de loops e vetores!!" << endl;

    cout << "Escolha uma cor de camisa da lista abaixo:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << ". " << corDasCoisas[i] << endl;
    }

    cout << "Digite o número correspondente à cor de sua camisa: ";
    cin >> corDasCoisas;

    if (corDasCoisas >= 1 && corDasCoisas <= 20)
    {
        resultadoCorDasCoisas = corVetor[corDasCoisas - 1];
    }
    else
    {
        cout << "Número inválido para a cor da camisa. Por favor, escolha um número entre 1 e 20." << endl;
        return 1;
    }

    cout << "Digite o dia de seu aniversário (1-31): ";
    cin >> diaDeAlgumaCoisa;

    if (diaDeAlgumaCoisa >= 1 && diaDeAlgumaCoisa<= 31)
    {
        resultadodiaDeAlgumaCoisa = diaVetor[diaDeAlgumaCoisa - 1];
    }
    else
    {
        cout << "Número inválido para o dia de alguma coisa. Por favor, escolha um número entre 1 e 30." << endl;
        return 1;
    }

    cout << "Digite o mês de seu aniversário (1-12): ";
    cin >> mesAleatorio;

    if (mesAleatorio >= 1 && mesAleatorio <= 12)
    {
       resultadoMesAleatorio= mesVetor[mesAleatorio - 1];
    }
    else
    {
        cout << "Número inválido para o mês aleatorio. Por favor, escolha um número entre 1 e 12." << endl;
        return 1;
    }

    cout << "Sua frase é:" << endl;
    cout << "Um dia encontrei " << resultadoCorDasCoisas << " vestindo " << resultadoDiaDeAlgumacoisa<< " enquanto " << resultadoMesAleatorio<< " Vendia algoritmos." << endl;

    return 0;
}