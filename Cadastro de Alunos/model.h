#define MAX 100

typedef struct aluno {
    char nome[100];
    int RA;
    int idade;
    float media;
} aluno;

typedef struct msg
{
    char txt[200];
} msg;

aluno *cadAluno[MAX];
