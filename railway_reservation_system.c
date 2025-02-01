#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Train_No;
    char Desto[30];
    int Avo; 
    int Pricey;
} Transport;

Transport transports[] = {
    {101, "Kigali", 30, 5000},
    {102, "Musanze", 25, 4500},
    {103, "Rubavu", 15, 3500},
    {104, "Nyundo", 20, 4000},
    {105, "Huye", 10, 3000}
};

void viewAvailableOptions() {
    printf("\nView Available Train Options:\n");
    int index;
     for (index = 0; index < 4; index++){
        printf("Train No: %d, Destination: %s, Available seats: %d, Price: %d Rwf\n",
               transports[index].Train_No, transports[index].Desto, transports[index].Avo, transports[index].Pricey);
    }
}


void bookTickets() {
    int trainNumber, seatsToBook;

    printf("\nEnter train number: ");
    scanf("%d", &trainNumber);
    
    printf("Enter number of seats to book: ");
    scanf("%d", &seatsToBook);
    int i;

    for ( i = 0; i < 4; i++) {
        if (transports[i].Train_No == trainNumber) {
            if (seatsToBook <= transports[i].Avo) {
                transports[i].Avo -= seatsToBook;
                printf("%d tickets booked successfully for Train No: %d\n", seatsToBook, trainNumber);
                printf("Remaining seats: %d\n", transports[i].Avo);
            } else {
                printf("Not enough seats available!\n");
            }
        }
    }
    printf("Invalid train number!\n");
}

void cancelTickets() {
    int trainNumber, seatsToCancel;

    printf("\nEnter train number: ");
    scanf("%d", &trainNumber);
    
    printf("Enter number of seats to cancel: ");
    scanf("%d", &seatsToCancel);

    int i;
    for (i = 0; i < 4; i++) {
        if (transports[i].Train_No == trainNumber) {
            transports[i].Avo += seatsToCancel;
            printf("%d tickets canceled successfully for Train No: %d\n", seatsToCancel, trainNumber);
            printf("Updated available seats: %d\n", transports[i].Avo);
            return; 
        }
    }
    printf("Invalid train number!\n");
}

int main() {
    int choice;

        printf("\n===== Choose an option =====\n");
        printf("1. View Available Trains\n");
        printf("2. Book Tickets\n");
        printf("3. Cancel Tickets\n");
        printf("4. Search by destination");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewAvailableOptions();
                break;
            case 2:
                bookTickets();
                break;
            case 3:
                cancelTickets();
                break;
            case 4:
                printf("Welcome!");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    return 0; 

}

