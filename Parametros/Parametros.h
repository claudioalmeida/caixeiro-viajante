#ifndef PARAMETROS_H
#define PARAMETROS_H

namespace Parametros
{
int SEMENTE_GERADOR_ALEATORIO = 7;
//int SEMENTE_GERADOR_ALEATORIO;
extern const int TAMANHO_DA_POPULACAO = 100;
extern const int NUMERO_DE_GERACOES = 100;
extern const int NUMERO_DE_GERACOES_PARA_REVISAO_DOS_PARAMETROS = 5;
extern const int LIMITE_DE_GERACOES_ESTAGNADAS = 4;
extern const int NUMERO_DE_CIDADES = 130;
int cidades[NUMERO_DE_CIDADES];

extern const double TAXA_DE_MIGRACAO = 10;
extern const double PROBABILIDADE_INICIAL_DE_MUTACAO = 15;
extern const double PROBABILIDADE_INICIAL_DE_ROTACAO = 15;
extern const double PROBABILIDADE_INICIAL_DE_CROSSOVER = 75;
double PROBABILIDADE_DE_MUTACAO = PROBABILIDADE_INICIAL_DE_MUTACAO;
double PROBABILIDADE_DE_ROTACAO = PROBABILIDADE_INICIAL_DE_ROTACAO;
double PROBABILIDADE_DE_CROSSOVER = PROBABILIDADE_INICIAL_DE_CROSSOVER;
extern const double LIMITE_DA_DIFERENCA_DE_FITNESS_PARA_ENTRAR_EM_TORNEIO = 0.1;
extern const double LIMITE_DA_DISTANCIA_EUCLIDIANA_PARA_ENTRAR_EM_TORNEIO = 0.1;
extern const double LIMITE_DA_DIFERENCA_DE_FITNESS_PARA_CONSIDERAR_ESTAGNADO = 100;
double distancias[NUMERO_DE_CIDADES][NUMERO_DE_CIDADES];

const char* ARQUIVOS_DE_ENTRADA[] = {"Entrada/burma14.xml","Entrada/ch130.xml"};

const char* ARQUIVO_DE_ENTRADA = ARQUIVOS_DE_ENTRADA[1];
}

#endif
