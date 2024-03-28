
#include <stdio.h>
#include <string.h>

int main()
{
    //  user enter there name, age, email, country.....
    //  name(string), age(int), email(string), country(string)

    char name[30], email[30], country[30], _country[30];
    int age;

    printf("\n\n     Simple user management system for voting\n\n");
    
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Which country are you currently in? ");
    scanf("%s", country);


    printf("Enter your email: ");
    scanf("%s", email);
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your citizenship country: ");
    scanf("%s", _country);

    printf("\nName: %s", name);
    printf("Email: %s\n", email);
    printf("Age: %d\n", age);
    printf("Currently in : %s.\n", country);
    printf("Citizen of: %s.\n", _country);

    printf("\nChecking for qualification to vote...\n");
    if(age >= 18 && strcmp(_country, country) == 0) {
        printf("User qualifies to vote\n");
    } else {
        printf("User can't vote, either below age or not a citizen\n");
    }

    return 0;
}