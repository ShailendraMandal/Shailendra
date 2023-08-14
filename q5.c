#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASSENGERS 50

typedef struct {
    char name[50];
    int age;
    char gender;
    int seatNumber;
} Passenger;


void displayAvailableSeats(int seats[], int totalSeats) {
    printf("\nAvailable Seats:\n");
    for (int i = 0; i < totalSeats; i++) {
        if (seats[i] == 0) {
            printf("%d ", i + 1);
        } else {
            printf(" - ");
        }
    }
    printf("\n");
}

int main() {
    int totalSeats = 10;
    int seats[MAX_PASSENGERS] = {0};
    Passenger passengers[MAX_PASSENGERS];
    int passengerCount = 0;

    while (1) {
        printf("\nRailway Reservation System\n");
        printf("1. Reserve a Seat\n");
        printf("2. Display Available Seats\n");
        printf("3. Display Passenger List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (passengerCount >= MAX_PASSENGERS) {
                    printf("Maximum number of passengers reached.\n");
                } else {
                    displayAvailableSeats(seats, totalSeats);
                    printf("Enter seat number to reserve: ");
                    int seatNumber;
                    scanf("%d", &seatNumber);

                    if (seatNumber >= 1 && seatNumber <= totalSeats && seats[seatNumber - 1] == 0) {
                        seats[seatNumber - 1] = 1; 
                        Passenger passenger;
                        printf("Enter passenger name: ");
                        scanf("%s", passenger.name);
                        printf("Enter passenger age: ");
                        scanf("%d", &passenger.age);
                        printf("Enter passenger gender (M/F): ");
                        scanf(" %c", &passenger.gender);
                        passenger.seatNumber = seatNumber;

                        passengers[passengerCount] = passenger;
                        passengerCount++;

                        printf("Seat reserved successfully!\n");
                    } 
                    else {
                        printf("Invalid seat number or seat already reserved.\n");
               }
               }
              }
              }
              }
                   

