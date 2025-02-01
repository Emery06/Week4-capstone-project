#include <stdio.h>
#include <stdlib.h>

int main(){
	typedef struct{
		int Train_No;
		char Desto[30];
		int Avo;
		int Pricey;
	}Transport;
	
	Transport transports[]={
		{101,"Kigali",30,5000},
		{102,"Musanze",25,4500},
		{103,"Rubavu",15,3500},
		{104,"Nyundo",20,4000},
	    {105,"Huye",10,3000}
	};
	  printf("View Available options\n");
	int index;
	  for(index=0 ; index<4; index++ ){
	  
	  	printf("Train No:%d,Destination:%s,Available seats:%d,Price:%d\n",transports[index].Train_No,transports[index].Desto,transports[index].Avo,transports[index].Pricey);
	  }
	
    
    return 0;
}

