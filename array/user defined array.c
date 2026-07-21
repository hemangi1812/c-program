#include <stdio.h>
int main()
{
    int size;
    int sum = 0;
    float avg;
    
    printf("enter size");
    scanf("%d", &size);
    int arr[size];
    int max=arr[0];
    int min=arr[0];
    printf("enter %d element", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
       
        // printf("\n%d",arr[i]);
        sum = sum + arr[i];
        {
            for (int i = 1; i < size; i++)
            {
                if(arr[i]<min){
                    min=arr[i];
                }
            }
        }

    }
    avg = (float)sum / size;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j]){
                if(arr[i]==arr[j]){
                    printf("\n duplicate element of array%d",arr[i]);
                }
                    
                }
            }
            
        }
    
   
    
    printf("total of array element %d", sum);
    printf("\navg of array element %.2f", avg);
    printf("\n max of array %d",max);
    printf("\n min of array %d",min);
    
    //min nu m 
    // find total sum
    //find max num
    }

   //print 0  to 10 incrementing the value 
    /* for (int i=0; i<=10; i++)
     {
         printf("\n%d", i);
     }
        //print 0 to 10 in decrement order

     //for (int i=10; i>=0; i--)
   {
      printf("\n%d", i); */