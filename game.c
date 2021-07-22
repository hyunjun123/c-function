#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int wl(int a, int b);
int main(){
	int i,player,w,score,num=0;
	srand(time(NULL));
	printf("가위 바위 보 게임입니다.\n");
	printf("1. 가위 2. 바위 3. 보\n");	
re:
	while(1){
		printf("가위 바위 보!!\n");
		i=rand()%3+1; //1에서 3  
		//ex %5+3 => 3,4,5,6,7
		scanf("%d",&player); //숫자를 입력받음 
		system("cls"); //화면 삭제 
		if(player>3||player<1){
			printf("다시\n");
			goto re;
		}
		num++; //num값이 하나 올라감. 
		w=wl(i,player); //wl에 i,player값을 넣고 리턴받은 값을 w에 저장 
		score+=w; //스코어=스코어+w 
		printf("점수: %d 경기횟수%d \n\n",score,num);
	} 
	return 0;
}
int wl(int a, int b) //i,player
{
	if(a==b){ //a와b가 같으면  
		if(a==1)printf("com = 가위 player= 가위 \n"); //둘다 1일때 
		else if(a==2)printf("com = 바위 player= 바위 \n"); //둘다 2일때 
		else if(a==3)printf("com = 보 player= 보 \n");  //둘다 3일때 
		printf("비김\n");
		return 0; //비기면 0을 리턴함 
	}
	switch(b){
		case 1: //가위 
			//win
			if(a==3){ //플레이어는 1을 내고 컴퓨터는 3을냄  
				printf("com = 보 player= 가위 \n");
				printf("이김\n");
				return 1; 	//1을 리턴 
			}
			//lose 
			else if(a==2){ //플리에어는 1을내고 컴퓨터는 2를 냄 
				printf("com = 바위 player= 가위 \n");
				printf("짐\n");
				return -1;	 //-1을 리턴 
			}
		case 2: //바위 
			//win
			if(a==1){ //플레이어는 2를내고 컴퓨터는 1을냄 
				printf("com = 가위 player= 바위 \n");
				printf("이김\n");
				return 1; 	
			}
			//lose
			else if(a==3){ //플레이어는2를내고 컴퓨터는 3을냄 
				printf("com = 보 player= 바위 \n");
				printf("짐\n");
				return -1;	 
			}
				
		case 3: //보 
			//win
			if(a==2){ //플레이어는 3을내고 컴퓨터는2를냄 
				printf("com = 바위 player= 보 \n");
				printf("이김\n");
				return 1; 	
			}
			//lose
			else if(a==1){ //플레이어는 3을내고 컴퓨터는 1을냄 
				printf("com = 가위 player= 보 \n");
				printf("짐\n");
				return -1;	 
			}		
	}
}
