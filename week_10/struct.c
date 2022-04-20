#include <stdio.h>
#include <string.h>

struct Person
{
    char name[30];
    int age;
    double weight;
    double height;
};

typedef struct Person Person;

void printPerson(struct Person person)
{
    printf("%s is %d years old, weight %lf kg and is %lf meters tall.\n", person.name, person.age, person.weight, person.height);
}
int main(void)
{
    Person person1;
    strcpy(person1.name, "Bob");
    person1.age = 34;
    person1.weight = 80.3;
    person1.height = 1.67;
    printPerson(person1);
    return 0;
}
