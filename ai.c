#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';
#define TAM 200 
#define log "Dev"
#define pass "lablego"
int main(void) {
 // Inicio do Login
char str2[TAM],user[TAM],passw[TAM],passw1[TAM],email[TAM];
 printf("Entre na sua conta Twitch para acessar o ChatBot : \n \nLogin / Cadastre-se : \n");
 gets(str2);
  if(strstr(str2,"Login")!=0 || strstr(str2,"login")!=0)
      {char login[100],password[100];
begin:
printf("\nUsuário :  ");
gets(login);
printf("\nSenha :  ");
gets(password);
  if (strcmp(login,log)==0 && strcmp(password,pass)==0)
  {
  printf("\n\nAcesso Permitido \n\n");
  }

else if (strcmp(login,log)==0 && strcmp(password,pass)!=0)
{
  printf("\n\nSenha Invalida \n\nTente Novamente\n\n");
  goto begin;
}
       else if (strcmp(login,log)!=0 && strcmp(password,pass)==0)
       {
       printf("\n\nUsuário Invalido \n\nTente Novamente\n\n");
       goto begin;
       }
           else 
           {
             printf("\n\nLogin Inválido \n\n Tente Novamente \n\n");
             goto begin;
           }
       }
  else if (strstr(str2,"Cadastrar")!=0 || strstr(str2,"cadastrar")!=0 || strstr(str2,"cadastre-se")!=0 || strstr(str2,"Cadastre-se")!=0)  
      {
       printf("Digite seu Usuário : \n");
       gets(user);
       Senha:
       printf("Digite uma senha : \n");
       gets(passw);
       printf("Escreva Novamente a senha : \n");
       gets(passw1);
       printf("Digite seu email : \n");
       gets(email);
           if (strcmp(passw1,passw)!=0)
           {
             printf("Erro\n");
             goto Senha;
           }
           else 
           {
             printf("\nCadastro Realizado !");
           }
      }   
//Fim do Login


// Inicio Perguntas
for (;;)
{
 char str1[TAM],game[TAM];
 Ponto1:
printf(" \n\nEscolha uma das opções a seguir : \n");
printf("Fale Conosco\nSobre\nCategorias\nTwitch Prime\n\n");
gets(str1);
// Começo Fale Conosco
if(strstr(str1,"Fale Conosco")!=0 || strstr(str1,"Fale")!=0 || strstr(str1,"Conosco")!=0)
{
 printf("\n\nAcesse Nosso Site para Abrir um Ticket");
 printf("\n\nDeseja algo mais ?\n");
 gets(str1);
 if (strstr(str1,"Não")!=0 || strstr(str1,"N")!=0 || strstr(str1,"No")!=0 || strstr(str1,"n")!=0 || strstr(str1,"Nao")!=0 || strstr(str1,"nao")!=0 || strstr(str1,"não")!=0)
 {
   break;
 }
    else 
   {
  goto Ponto1;
   }

}
// Começo do Sobre
else if(strstr(str1,"Sobre")!=0)
{
 printf("\n\n Bem-vindo à Twitch. Somos uma comunidade global de milhões de pessoas que se unem diariamente para criar seu próprio entretenimento: experiências únicas, ao vivo, imprevisíveis e irreproduzíveis criadas pelas interações mágicas entre essas pessoas.Com o chat integrado a todas as transmissões, você não é apenas um espectador na Twitch: você é parte do show!\n\nCom as ferramentas de descoberta para ajudar os espectadores a encontrar o seu conteúdo, todos saberão onde descobrir o seu canal e se juntarão à sua jornada.\n\nVocê não precisa fazer isso sozinho! Os streamers e os espectadores trabalham juntos para criar um canal e uma cultura que seja exatamente o que você quer.\n\n Twitch ajuda você a ganhar dinheiro como streamer,mesmo se estiver apenas começando, por meio do nosso programa de Afiliados\n\n");
printf("Deseja algo mais ?\n");
 gets(str1);
 if (strstr(str1,"Não")!=0 || strstr(str1,"N")!=0 || strstr(str1,"No")!=0 || strstr(str1,"n")!=0 || strstr(str1,"Nao")!=0 || strstr(str1,"nao")!=0 || strstr(str1,"não")!=0)
 {
   break;
 }
    else 
   {
  goto Ponto1;
   }
}
// Começo Categorias
 else if(strstr(str1,"Categorias")!=0 || strstr(str1,"Jogos")!=0 || strstr(str1,"Jogo")!=0)
{
  jogo:
 printf("Escolha um jogo :");
 gets(game);
 if (strstr(game,"Fortnite")!=0 || strstr(game,"Gta 5")!=0 || strstr(game,"GTA 5")!=0 || strstr(game,"gta 5")!=0 || strstr(game,"World of Warcraft")!=0 || strstr(game,"WOW")!=0 || strstr(game,"LOL")!=0 || strstr(game,"League of Legends")!=0 || strstr(game,"league of legends")!=0 || strstr(game,"world of warcraft")!=0 || strstr(game,"warcraft")!=0 || strstr(game,"Cs Go")!=0 || strstr(game,"CS GO")!=0 || strstr(game,"DOTA 2")!=0 || strstr(game,"dota 2")!=0 || strstr(game,"Just Chatting")!=0 || strstr(game,"Just Chat")!=0 || strstr(game,"just chat")!=0 || strstr(game,"stadium")!=0 || strstr(game,"Overwatch")!=0 || strstr(game,"overwatch")!=0 || strstr(game,"HearthStone")!=0 || strstr(game,"hearthstone")!=0 || strstr(game,"the division 2")!=0 || strstr(game,"division 2")!=0 || strstr(game,"COD")!=0 || strstr(game,"Black Ops 2")!=0 || strstr(game,"PUBG")!=0 || strstr(game,"pubg")!=0 || strstr(game,"Player Unknow Battlegrounds")!=0 || strstr(game,"the forest")!=0 || strstr(game,"forest")!=0 || strstr(game,"apex legends")!=0 || strstr(game,"Apex Legends")!=0 || strstr(game,"Poker")!=0 || strstr(game,"poker")!=0 || strstr(game,"FIFA 19")!=0 || strstr(game,"Fifa")!=0 || strstr(game,"Rainbow Six")!=0 || strstr(game,"Innocence")!=0 || strstr(game,"Uno")!=0 || strstr(game,"Dead By Daylight")!=0 || strstr(game,"Minecraft")!=0 || strstr(game,"Dead By Daylight")!=0 || strstr(game,"Path of Exile")!=0 || strstr(game,"Rocket League")!=0 || strstr(game,"Sea of Thieves")!=0 || strstr(game,"Tibia")!=0 || strstr(game,"mario")!=0 || strstr(game,"red")!=0 || strstr(game,"starcraft")!=0 || strstr(game,"Paladins")!=0 || strstr(game,"The Sims")!=0 || strstr(game,"Zelda")!=0 )
 {
      int i;
       srand( time(NULL) );
        i = rand() % 10000000;
        int b;
        srand( time(NULL) );
        b = rand() % 1000;
 printf("Esse jogo possui cerca de %d viewers e cerca de %d streamers\n",i,b);
 }
     else 
      {
        printf("Desculpe ainda não possuimos esse jogo em nosso ChatBot\n\nTente Novamente");
        goto jogo;
      }
 
 printf("Deseja algo mais ?\n");
 gets(str1);
 if (strstr(str1,"Não")!=0 || strstr(str1,"N")!=0 || strstr(str1,"No")!=0 || strstr(str1,"n")!=0 || strstr(str1,"Nao")!=0 || strstr(str1,"nao")!=0 || strstr(str1,"não")!=0)
 {
   break;
 }
    else 
   {
  goto Ponto1;
   }

}
//Começo Twitch Prime
else if(strstr(str1,"Twitch Prime")!=0 || strstr(str1,"Prime")!=0 || strstr(str1,"Twitch")!=0 || strstr(str1,"twitch")!=0 || strstr(str1,"prime")!=0) 
{
 printf("\n Os assinantes do Twitch Prime possuem algumas vantagens, listadas a seguir.\n\n -Inscrição de canal: todo assinante da Twitch Prime recebe uma inscrição de canal a cada 30 dias. Ao se inscrever em um determinado canal, o usuário tem alguns benefícios, como acesso à emotes personalizados para usar em toda a plataforma, mudar a cor do bate-papo, distintivo de inscrito e visualização de vídeos sem anúncios em alguns canais.\n\n -Jogos liberados: a Twitch Prime oferece aos seus usuários todos os meses o acesso exclusivo a alguns jogos. Em média, são disponibilizados cinco títulos por vez.\n\n Deseja comprá-lo?\n");
 Ponto2:
 gets(str1);
      if (strstr(str1,"Sim")!=0 || strstr(str1,"S")!=0 || strstr(str1,"Si")!=0 || strstr(str1,"s")!=0)
      {
      printf("\nA assinatura premium da Twitch TV custa R$ 7,90 mensais nos primeiros seis meses e, após este período, o valor passa para R$ 14,90 mensais");
                 int numC=0,cvv=0,cpf=0,birth=0,expdate=0;
                 char name[200];
                 printf("\n\nInsira o número de cartão de Crédito : ");
                 scanf("%d",&numC);
                 printf("Insira o CVV : ");
                 scanf("%d",&cvv);
                 printf("Insira o CPF : ");
                 scanf("%d",&cpf);
                 printf("Digite a Data de Nascimento : ");
                 scanf("%d",&birth);
                 printf("Digite a Data de Validade : ");
                 scanf("%d",&expdate);
                 printf("Insira o nome do Titular : ");
                 scanf(" %c",&name[200]);
                 printf("Carregando . . .");
                 printf("\n\nObrigado , seu pagamento foi aprovado !\n\n");
                 goto Ponto1;
        }
    else if (strstr(str1,"Não")!=0 || strstr(str1,"N")!=0 || strstr(str1,"No")!=0 || strstr(str1,"n")!=0 || strstr(str1,"Nao")!=0 || strstr(str1,"nao")!=0 || strstr(str1,"não")!=0)
       {
       goto Ponto1;
       }
     else 
     {
       printf("Desculpe não entendi , poderia repetir ?\n");
       goto Ponto2;
     }
 }
}
  return 0;
}
