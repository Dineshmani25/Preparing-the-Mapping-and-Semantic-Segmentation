#include <stdio.h>

// Define a structure to represent a department
struct Department {
    char name[50];
    int lights;
    int rooms;
    int fans;
    int labs;
    float totalDepartmentArea;
    float totalLength;
};

int main() {
    // Declare an array of structures to store information for multiple departments
    struct Department departments[10];  // Assuming a maximum of 10 departments, adjust as needed

    int numDepartments;

    // Get the number of departments from the user
    printf("Enter the number of departments: ");
    scanf("%d", &numDepartments);

    // Get input for each department
    for (int i = 0; i < numDepartments; i++) {
        printf("\nEnter details for Department %d:\n", i + 1);

        printf("Enter department name: ");
        scanf("%s", departments[i].name);

        printf("Enter the number of lights: ");
        scanf("%d", &departments[i].lights);

        printf("Enter the number of rooms: ");
        scanf("%d", &departments[i].rooms);

        printf("Enter the number of fans: ");
        scanf("%d", &departments[i].fans);

        printf("Enter the number of labs: ");
        scanf("%d", &departments[i].labs);

        printf("Enter the total department area: ");
        scanf("%f", &departments[i].totalDepartmentArea);

        printf("Enter the total length: ");
        scanf("%f", &departments[i].totalLength);
    }

    // Print the table header
    printf("\nTable Format:\n");
    printf("| %-20s | %-10s | %-10s | %-10s | %-10s | %-20s | %-20s |\n",
           "Department Name", "Lights", "Rooms", "Fans", "Labs", "Total Dept Area", "Total Length");
    printf("|---------------------|------------|------------|------------|------------|---------------------|---------------------|\n");

    // Print the values for each department in a table format
    for (int i = 0; i < numDepartments; i++) {
        printf("| %-20s | %-10d | %-10d | %-10d | %-10d | %-20.2f | %-20.2f |\n",
               departments[i].name, departments[i].lights, departments[i].rooms,
               departments[i].fans, departments[i].labs, departments[i].totalDepartmentArea,
               departments[i].totalLength);
    }

    return 0;
}