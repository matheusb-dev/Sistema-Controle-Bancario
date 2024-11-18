#include "funcoes.h" // Onde está armazenada nossa estrutura de dados

int main()
{
    TipoLista L = {NULL, NULL};
    int opc;
    system("color 0A");

    system("cls"); // Limpa a tela

    do
    {
        tela();
        gotoxy(33, 06);
        printf("MENU PRINCIPAL");
        gotoxy(29, 10);
        printf("1 - Contas Bancarias final");
        gotoxy(29, 12);
        printf("2 - conta bancaria inicio");
        gotoxy(29, 14);
        printf("3 - conta");
        gotoxy(6, 23);
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            menu_contas();
            break;
        case 2:
            consultar_conta(&L);
            break;
        case 3:
            printf("Saindo...");
            break;
        default:
            gotoxy(6, 23);
            printf("Opcao invalida. Tente novamente.");
            getch();
            break;
        }
        //salvar_Arquivo(&L); // Salvar contas no arquivo ao sair
    } while (opc != 3);

    return 0;
}
