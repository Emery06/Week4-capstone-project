#include <stdio.h>
#include <stdlib.h>

void viewAvailableOptions(){
	printf("\nTrain No:101,Destination:Kigali,Available seats:30,Price=5000Rwf");
	printf("\nTrain No:102,Destination:Musanze,Available seats:25,Price=4500Rwf");
	printf("\nTrain No:103,Destination:Rubavu,Available seats:15,Price=3500Rwf");
	printf("\nTrain No:104,Destinafion:Nyundo,Available seats:20,Price=4000Rwf");
	printf("\nTrain No:105,Destination:Huye,Available seats:10,Price=3000Rwf");
}

int main() {
	printf("Available trains: ");
	
    int Haft[5];
    char Dest[5];
    int Avail[5];
	int Tik[5];
    
	viewAvailableOptions();

	
	
	return 0;
}
