#include <stdio.h>
#include <stdlib.h>


int main() {
	int choice;
	printf("Choose an option: \n");
	printf("\n1.View available trains(We'll implement this later!) ");
	printf("\n2.Book tickets(we'll implement this later!) ");
	printf("\n3.Cancel tickets(We'll implement this later!)" );
	printf("\n4.Search by destination(we'll implement this later!)" );
	printf("\n5.Exit");
    printf("\nEnter your choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("View available train feature coming soon!");
			break;
		case 2:
			printf("Book tickets coming out this summer");
			break;
		case 3:
			printf("Cancel tickets that were previously booked");
			break;
		case 4:
			printf("Search by destination all over the world");
			break;
		case 5:
			break;
	}
	return 0;
}
