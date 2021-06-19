#include<stdio.h>
int main()
{
  int choice;
  scanf("%d",&choice);
  switch(choice)
  { 
    case 1: 
         printf("Food item-Pizza\n Prize-Rs239");
         break;
    case 2:
        printf("Food item-Burger\nPrize-Rs129");
        break;
    case 3: 
         printf("Food item-Pasta\nPrize-Rs179");
         break;
    case 4: 
        printf("Food item-French Fries\nPrize-Rs99");
        break;
    case 5: 
        printf("Food item-Sandwich\nPrize-Rs149");
        break;
      default:
         printf("Invalid choice");
}
return 0;
}
