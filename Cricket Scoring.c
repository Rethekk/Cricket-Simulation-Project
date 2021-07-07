#include <string.h>
#include <stdio.h>
#include<time.h>

struct Team1
{
    int runs,wickets,b1runs,b1wickets;
    char aname[30],b1name[30];
    char method[15];
}player1[11];

struct Team2
{
    int aruns,awickets,b2runs,b2wickets;
    char bname[30],b2name[30];
    char methods[15];
}player2[11];
void show(void)
{
	int i;
	struct Team1 player11;
	struct Team2 player22;
	FILE *f; 
f = fopen("first.txt","r");

FILE *f2;
f2 = fopen("second.txt","r");

printf("Inning one \n");
while(!feof(f))
{
	fread(&player11,sizeof(struct Team1),1,f);
	printf("%s\t\t%d\t%d\n",player11.aname,player11.runs,player11.wickets);
}

printf("\nInning two \n");

while(!feof(f2))
{
	fread(&player22,sizeof(struct Team2),1,f2);
	printf("%s\t\t%d\t%d\n",player22.bname,player22.aruns,player22.awickets);
}

}
int error(int scores,int *balls)
{
	if( scores==-1 || scores==1 || scores==3 || scores==4 || scores==5 || scores==6 || scores==2){
	return scores;
}
	else{
	printf("ERROR!\n");
	printf("Avoid entering anything other then -1,1,2,3,4,5,6\n");
		*balls-=1;
		return *balls;	
	}
}
int main()
{
	srand(time(NULL));

int overs, n, i, j, x, toss;
char team1[20], team2[20];
system("color b0");
printf("\t\t\t\t****CRICKET SCORING PROGRAM****\n");
printf("\t\t\t\t********USER MANUAL********\n");
	
	printf("1.First enter the name of two playing teams\n");
	printf("2.Enter the number of overs to be played in each innings\n");
	printf("3.Enter the name of players according to correct batting order\n");
	printf("4.Enter -1 in the runs, if the ball is dead, white or no ball or the batsman is out.\n");
	printf("5.Enter the way batsman has been out, if the batsman has been out through runout, bowler won't get a wicket.\n");
	printf("6.Avoid entering runs other else then '1,2,3,4,5,6,-1', or else error will be shown.\n");
	printf("7.Enter the name of the new bowler after every over and start of the inning.\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\tGroup Members:");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\tRethek kumar(18k-0242)\n\t\t\t\t\t\t\t\t\t\t\tShahwaiz Shaban(18k-0288)\n\t\t\t\t\t\t\t\t\t\t\tGul Nawaz(18k-0140)\n");
	
puts("Enter Name of the first team: ");
gets(team1);
puts("Enter Name of the second team: ");
gets(team2);
printf("Enter number of Overs\n"); //overs
scanf("%d", &overs);
system("cls");

printf("\t\t*********%s VS %s*********\n", team1, team2);
printf("\t\t*********%d Over Match*******\n", overs);
printf("\n\n\t\t  *******TOSS********\n");

	toss= rand()%4 ;
	if(toss==0){
		printf("%s won the toss and have elected to bat first!", team1);
	}
	if(toss==1){
	 	printf("%s won the toss and have elected to bat first!", team2);
	}
	if(toss==2){
		printf("%s won the toss and have decided to bowl first!", team1);
	}
	if(toss==3){
		printf("%s won the toss and have decided to bowl first!", team2);
	}

if(toss==0 || toss==3)	
{
printf("\nEnter The Playing 11 of %s:", team1);  //Teamlist
for(i=0;i<=10;i++)
{
	printf("\n%d. ", i+1);
	fflush(stdin);
	gets(player1[i].aname);
	
}
system("cls");
printf("\nEnter The Playing 11 of %s:", team2);
for(i=0;i<=10;i++)
{
	printf("\n%d. ", i+1);
	fflush(stdin);
	gets(player2[i].bname);
}
system("cls");
}

else if(toss==1|| toss==2)	
{
printf("\nEnter The Playing 11 of %s:", team2);  //Teamlist
for(i=0;i<=10;i++)
{
	printf("\n%d. ", i+1);
	fflush(stdin);
	gets(player1[i].aname);
	
}
system("cls");
printf("\nEnter The Playing 11 of %s:", team1);
for(i=0;i<=10;i++)
{
	printf("\n%d. ", i+1);
	fflush(stdin);
	gets(player2[i].bname);
}
system("cls");
}

int a,temp3=0, w1, temp4=1,k=0,temp1=0, temp2=1, w=0;
int score1, total,bo=0;
char nob;

 
printf("\n**************1st Innings*****************\n");


for(i=0, k=0; i<overs; i++)
	{            //add
	printf("Enter Name Of Bowler:\n");
	fflush(stdin);
	gets(player1[bo].b1name);

		for(j=0; j<=5; j++ ){
			printf("%d.%d: ", i, j+1);
		
				scanf("%d",&score1);
				error(score1,&j);
				if (score1<-1||score1>6)
				{
					total=total;
				}
				if(score1>0){
					total+=score1;
					
					}
				if(score1==-1)
				{
				total=total;
				}
					if (score1==1 )
					{
						     
							player1[k].runs+=score1;
							player1[bo].b1runs+=score1;
							if(k==temp1)
						    {
						    	k=temp2;
							}
							else if(k==temp2)
						    {
						    	k=temp1;
							}
				}
				
					if(score1==2)
					{
			
							player1[k].runs+=score1;
							player1[bo].b1runs+=score1;
							
				}
					 if(score1==3){
							player1[k].runs+=score1;
							player1[bo].b1runs+=score1;
							
						    if(k==temp1)
						    {
						    	k=temp2;
							}
						    else if(k==temp2)
						    {
						    	k=temp1;
							}
						}
					
					 if(score1==4 ){
							player1[k].runs+=score1;
							player1[bo].b1runs+=score1;	
						}
						
					 if(score1==5 ){
							player1[k].runs+=score1;
							player1[bo].b1runs+=score1;	
						}
						
					if(score1==6){
							player1[k].runs+=score1;
							player1[bo].b1runs+=score1;
							
						}		
					if(score1==-1){
					printf("O- Out?\nN-No ball?\nW-Wide?\nD-Dead ball\n");
					scanf("%s",&nob);
					if(nob=='O' || nob=='o'){ 
				    puts("Way Of Getting Out? (Caught, Bowled, Runout, Stumped)");
				    fflush(stdin);
				    gets(player1[k].method);
				    if(strcmp(player1[k].method,"Runout")==0||strcmp(player1[k].method,"runout")==0)
				    {
				    	w1++;
					}
					else {
					w1++;
					player1[bo].b1wickets+=1;	
					}
					if(w1==1 ){
					 if(k==temp1){
					  temp1=2;
					  k=temp1;
				      }
				      else if(k==temp2){
					 temp2=2;
					 k=temp2;
				      }
					}
					else if(w1==2){
					if(k==temp1){
					 k=temp1;
				  
					 temp1=3;
				}
				      else if(k==temp2)
					  {
					 temp2=3;
					 k=temp2;
				      }
					}
					else if(w1==3){
					if(k==temp1){
					 temp1=4;
					 k=temp1;
				      }
				      else if(k==temp2){
					 temp2=4;
					 k=temp2;
				      }
					}
					else if(w1==4){
					if(k==temp1){
					 temp1=5;
					 k=temp1;
				      }
				     else if(k==temp2){
					 temp2=5;
					 k=temp2;
				      }
					}
					else if(w1==5){
					if(k==temp1){
					 temp1=6;
					 k=temp1;
				      }
				     else if(k==temp2){
					 temp2=6;
					 k=temp2;
				      }
					}
					else if(w1==6){
					if(k==temp1){
					 temp1=7;
					 k=temp1;
				      }
				     else if(k==temp2){
					 temp2=7;
					 k=temp2;
				      }
					}
					else if(w1==7){
					if(k==temp1){
					 temp1=8;
					 k=temp1;
				      }
				      else if(k==temp2){
					 temp2=8;
					 k=temp2;
				      }
					}
					else if(w1==8){
					if(k==temp1){
					 temp1=9;
					 k=temp1;
				      }
				      else if(k==temp2){
					 temp2=9;
					 k=temp2;
				      }
					}
					else if(w1==9){
					if(k==temp1){
					 temp1=10;
					 k=temp1;
				      }          
				     else if(k==temp2){
					 temp2=10;
					 k=temp2;
				      }
					}
					else if(w1==9){
					break;
					}
				}
				else if(nob=='N' || nob=='W' || nob=='w' || nob=='n'){
						j--;
						total=total+1;
	 	       }
	 	       else if(nob=='D'||nob=='d'){
                       j--;	 	       	
				}
	}
}
if(k==temp1){
	k=temp2;
}
else if(k==temp2){
	k=temp1;
}
		printf("\n");
        printf("\t\t\t ****End of %d Over******\n",i+1);
        printf("===================================================\n");
		printf("\t\t\t%s||%d / %d \n\n",team1,total,w1);
	printf("Batsman: %s :%d Not Out \t\t Bowler: %s : %d/%d\n",player1[temp1].aname,player1[temp1].runs,player1[bo].b1name,player1[bo].b1runs,player1[bo].b1wickets);
	printf("         %s :%d Not Out \n",player1[temp2].aname,player1[temp2].runs);
	bo++;
	    printf("=====================================================\n");
}
int score2,total1;
	// second 
	printf("\n\t\t\t\t|||Target:%d|||\n",total+1);
	printf("=======================================================\n\n\n\n\n\n\n\n\n\n");
	puts("Press any key to proceed to 2nd Innings.");
     getch();
	system("cls");
	printf("\n\t\t\t**************2nd Innings*****************\n");

for(i=0, k=0, bo=0; i<overs; i++)
	{
	printf("Enter Name Of Bowler:\n");
	fflush(stdin);
	gets(player2[bo].b2name);
		for(j=0; j<=5; j++ ){
			printf("%d.%d: ", i, j+1);
		
				scanf("%d",&score2);
				error(score2,&j);
				if(score2>0){
					total1+=score2;
					}
					if(total1>total)
					{
						break;
					}
				if(score2==-1)
				{
				total1==total1;
				}
					if (score2==1 )
					{
						     
							player2[k].aruns+=score2;
							player2[bo].b2runs+=score2;
							if(k==temp3)
						    {
						    	k=temp4;
							}
							else if(k==temp4)
						    {
						    	k=temp3;
							}
				}
				
					if(score2==2)
					{
			
							player2[k].aruns+=score2;
							player2[bo].b2runs+=score2;
				}
					 if(score2==3){
							player2[k].aruns+=score2;
							player2[bo].b2runs+=score2;
						    if(k==temp3)
						    {
						    	k=temp4;
							}
						    else if(k==temp4)
						    {
						    	k=temp3;
							}
						}
					
					 if(score2==4 ){
							player2[k].aruns+=score2;
							player2[bo].b2runs+=score2;
						}
						
					 if(score2==5 ){
							player1[k].runs+=score2;
							player1[bo].b1runs+=score2;	
						}
						
					if(score2==6){
							player2[k].aruns+=score2;
							player2[bo].b2runs+=score2;
						}		
					if(score2==-1){
					printf("O- Out?\nN-No ball?\nW-Wide?\nD-Dead ball\n");
					scanf("%s",&nob);
					if(nob=='O' || nob=='o'){
					puts("Way Of Getting Out? (Caught, Bowled, Runout, Stumped)");
				    fflush(stdin);
				    gets(player2[k].methods);
				    if(strcmp(player2[k].methods,"Runout")==0||strcmp(player2[k].methods,"runout")==0)
				    {
				    	w++;
					}
					else{
					w++;
					player2[bo].b2wickets+=1;
				}		
					if(w==1 ){
					 if(k==temp3){
					  temp3=2;
					  k=temp3;
				      }
				      else if(k==temp4){
					 temp4=2;
					 k=temp4;
				      }
					}
					else if(w==2){
					if(k==temp3){
					 temp3=3;
					 k=temp3;
				      }
				      else if(k==temp4){
					 temp4=3;
					 k=temp4;
				      }
					}
					else if(w==3){
					if(k==temp3){
					 temp3=4;
					 k=temp3;
				      }
				      else if(k==temp4){
					 temp4=4;
					 k=temp4;
				      }
					}
					else if(w==4){
					if(k==temp3){
					 temp3=5;
					 k=temp3;
				      }
				     else if(k==temp4){
					 temp4=5;
					 k=temp4;
				      }
					}
					else if(w==5){
					if(k==temp3){
					 temp3=6;
					 k=temp3;
				      }
				     else if(k==temp4){
					 temp4=6;
					 k=temp4;
				      }
					}
					else if(w==6){
					if(k==temp3){
					 temp3=7;
					 k=temp3;
				      }
				     else if(k==temp4){
					 temp4=7;
					 k=temp4;
				      }
					}
					else if(w==7){
					if(k==temp3){
					 temp3=8;
					 k=temp3;
				      }
				      else if(k==temp4){
					 temp4=8;
					 k=temp4;
				      }
					}
					else if(w==8){
					if(k==temp3){
					 temp3=9;
					 k=temp3;
				      }
				      else if(k==temp4){
					 temp4=9;
					 k=temp4;
				      }
					}
					else if(w==9){
					if(k==temp3){
					 temp3=10;
					 k=temp3;
				      }
				     else if(k==temp4){
					 temp4=10;
					 k=temp4;
				      }
					}
					else if(w==9){
					break;
					}
				}
				else if(nob=='N' || nob=='W' || nob=='w' || nob=='n'){
						j--;
						total1=total1+1;
	 	       }
	 	       else if(nob=='D'||nob=='d'){
                       j--;	 	       	
				}
	}
}

if(k==temp3){
	k=temp4;
}
else if(k==temp4){
	k=temp3;
}
		printf("\n");

	printf("\t\t\t ****End of %d Over******\n",i+1);
        printf("===================================================\n");
	printf("\t\t\t****%s || %d / %d\n****",team2,total1,w);
	printf("Batsman: %s :%d Not Out\t\t Bowler: %s:  %d/%d\n",player2[temp3].bname,player2[temp3].aruns,player2[bo].b2name,player2[bo].b2runs,player2[bo].b2wickets);
	printf("         %s :%d Not Out\n",player2[temp4].bname,player2[temp4].aruns);
	bo++;
	printf("===================================================\n");
	}
	getch();
	system("cls");
	FILE *f;
f = fopen("first.txt","w");
fwrite(&player1,sizeof(struct Team1),11,f);
fclose(f);
FILE *f2;
f2 = fopen("second.txt","w");
fwrite(&player2,sizeof(struct Team2),11,f2);
fclose(f2);

printf("\n\n******End Of Match****\n");
printf("===================================================\n");
printf("===================================================\n");
printf("\t\t\t\t******Match Summary****\n");
printf("\t\t  ***1st Innings***\n");


printf("===============================================\n");
      printf("PLAYER'S NAME        METHOD             RUNS\n");
      printf("=============================================\n");
      for (i=0; i<=10; i++){
      printf("%-20s %-20s%d\n",player1[i].aname, player1[i].method,player1[i].runs);
  }
  	printf("===============================================\n");
	printf("BOWLER'S NAME        RUNS CONCEDED           WICKETS\n");
	printf("================================================\n");
	for(i=0;i<overs;i++){
	printf("%-20s %-20d %d\n",player1[i].b1name,player1[i].b1runs,player1[i].b1wickets);
	}
	  printf("\n            ***TOTAL-%d / %d***              \n",total,w1); 
	          
	puts("---------------------------------------------"); 
	  
	  printf("\n\n\n\t\t\t\t******2nd Innings******\n");      
	  printf("================================================\n");
      printf("PLAYER'S NAME        METHOD             RUNS\n");
      printf("================================================\n");
  
     for (i=0; i<=10; i++){
	printf("%-20s %-20s %d\n",player2[i].bname,player2[i].methods,player2[i].aruns);
}
	printf("===============================================\n");
	printf("BOWLER'S NAME        RUNS CONCEDED           WICKETS\n");
	printf("================================================\n");
	for(i=0;i<overs;i++){
	printf("%-20s %-20d %d\n",player2[i].b2name,player2[i].b2runs,player2[i].b2wickets);
	}
	printf("            ***TOTAL-%d / %d***              \n",total1,w);
	puts("----------------------------------------------------");
	
	if(total>total1 && toss==0 && toss==3){
		printf("%s WIN by %d Runs",team1,total-total1);
	}
	else if(total>total1 && toss==1 && toss==2){
		printf("%s WIN by %d Runs",team2,total-total1);
	}
	else if(total1>total&& toss==1 && toss==2){
	printf("%s WIN the game by %d Wickets!",team1,10-w1);
	}
	else if(total1>total&& toss==0 && toss==3){
	printf("%s WIN the game by %d Wickets!",team2,10-w);
	}
	else if(total1==total){
	printf("It,s a TIE!!");
	}
	show();	
}



