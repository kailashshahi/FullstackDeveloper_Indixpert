#include<stdio.h>



int main()
{ 
    char name[10];
    int id;
    int hindimarks;
    int englishmarks;
    int mathmarks;
    int average;




    printf("Please Enter Student Name: ");
    scanf("%s",&name);

    printf("\nPlease Enter StudentID ");
    scanf("%d",&id);

    printf("Please Enter Marks in Hindi ");
    scanf("%d",&hindimarks);

    printf("Please Enter Marks in English ");
    scanf("%d",&englishmarks);

     printf("Please Enter Marks in English ");
    scanf("%d",&mathmarks);

  

   average=(hindimarks+englishmarks+mathmarks)/3;
     printf("\nAverage Marks: %d ",average);
   if(average>=60)
   {
      
      printf("\nFirst Division");

   }
   else if(average>=45 && average<60)
   {

    printf("\n Second Division");

   }
   else if(average>=30 && average<45)
   {
    
    printf("Third Division");


   }
   else if(average<30)
   {

    printf("Fail");
   }









    return 0;
}