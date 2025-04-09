#include<stdio.h>
#include<string.h>
char reponse[10], autrecom[10];
int tab[30];
int num,i=0, j=1, temps=0, nombrecom=1;
int main()
{
	int prix1=2000, prix2=1000, prix3=1500, prix4=1000, prix5=2500, prix6=1000;
    debut :
	printf("**********************BIENVENU A KASSU RESTO***********************\n\n\n");
	do
	{
		printf("====================================================================\n");
		printf("\t\t\tMENU DU RESTAURANT\n");
		printf("         ENTREE                             PRIX\n");
		printf("1)Salade"); printf("\t\t\t\t\t %d\n", prix1);
		printf("2)Akara "); printf("\t\t\t\t\t %d\n", prix2);
        printf("====================================================================\n");
		printf("       RESISTANCE                           PRIX\n");
		printf("3) Yassa ");  printf("\t\t\t\t\t %d\n", prix3);
		printf("4) Mafe  ");  printf("\t\t\t\t\t %d\n", prix4);
        printf("====================================================================\n");
		printf("        DESSERT                             PRIX\n");
		printf("5) Glace ");  printf("\t\t\t\t\t %d\n", prix5);
		printf("6) choco ");  printf("\t\t\t\t\t %d\n", prix6);
		printf("====================================================================\n");
        printf("choississez un numero parmi les numeros ci dessus\n");
		scanf("%d", &num);

		while(num<0 || num>6)
		{
			printf("\n le numero choisi doit etre parmi les numeros ci dessus\n");
		    scanf("%d", &num);
		}

		i = i+1 ;
		tab[i] = num ;
		temps = temps+5;
		j=j+1; 
		printf("\nvoulez vous faire un autre choix? tapez oui ou autre chose sinon\n");
		scanf("%s", reponse);

    }while (strcasecmp(reponse, "oui") == 0);
    
    printf("==============================================\n");
    printf("\tBILAN DE VOTRE COMMANDE %d \n", nombrecom);
    printf("==============================================\n");
    printf("Voici ce que vous avez commande dans l'ordre \n");
    
    for (i=1;i<j;i++)
    {
    	switch (tab[i]){
    	case 1 : printf("==> Menu numero %d: Salade\n", i); break;
        case 2 : printf("==> Menu numero %d: Akara\n", i); break;
    	case 3 : printf("==> Menu numero %d: Yassa\n", i); break;
    	case 4 : printf("==> Menu numero %d: Mafe\n", i); break;
    	case 5 : printf("==> Menu numero %d: Glace\n", i); break; 
    	case 6 : printf("==> Menu numero %d: Choco\n", i); break;
    	}
    }

    printf("--------------------------------------------------------------------\n");
    printf("vous allez devoir attendre %d minutes pour recevoir votre commande\n",temps);
    printf("--------------------------------------------------------------------\n");
    printf("MERCI DE VOTRE CONFIANCE! KASSO RESTO VOUS REMERCIE!\n");
    printf("--------------------------------------------------------------------\n");
    //reinitialisé les valeurs
    for (i = 1; i < j ; i++)
    {
    	tab[i]=0;
    }
    nombrecom=nombrecom+1;
    temps=0;
    i=0;
    j=1;
    printf("voulez vous commande encore une fois ?\n");
    scanf("%s", autrecom);
    if (strcasecmp(autrecom, "oui")==0)
    {
    	goto debut;
    }
    else
    {
    	return 0;
    }
	
}