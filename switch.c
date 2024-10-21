#include<stdio.h>


int main()
{
  printf("Enter wheather you are graduate of postgraduate: \n");
  printf("1 for graduate :\n2 for postgraduate : \n");
  int qualification;
  scanf("%d",&qualification);
  
  int bs = 0;
  int hra = 0;
  int da = 0;
  int gs = 0;
  int year;
    
  switch(qualification)
  {
      case 1:
            bs = 5000;
            hra = 0.2 * bs;
            da = 0.3 * bs;
            
            gs = bs + hra + da;
            
             printf("\nEnter number of years you have worked: \n ");
             
             scanf("%d",&year);
             
             switch(year)
             {
                case 1: 
                      printf("Your gorss salary is : %d",gs);
                      break;
               case 2: 
                      printf("Your gorss salary is : %d",gs);
                      break;
               default:
                      gs = gs + 2500;
                      printf("Your gorss salary is : %d",gs);
                      break;
            }
            
            break;
            
            
        case 2:
             bs = 6000;
             hra = 0.3* bs;
             da = 0.4 * bs;
            
             gs = bs + hra + da;
            
             printf("Enter number of years you have worked: \n");
             scanf("%d",&year);
             
             switch(year)
             {
                case 1: 
                      printf("Your gorss salary is : %d",gs);
                      break;
               case 2: 
                      printf("Your gorss salary is : %d",gs);
                      break;
               default:
                      gs = gs + 2500;
                      printf("Your gorss salary is : %d",gs);
                      break;
            }
            break;
    
      default:
          printf("please Enter correct qualification \n");
          break;
   }
            
    return 0;  
  
  
}
