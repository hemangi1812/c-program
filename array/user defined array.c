#include <stdio.h>
int main()
{
    int size;
    int sum = 0;
    float avg;
    
    printf("\nenter size");
    scanf("%d", &size);

    int arr[size];
    int max=arr[0];
    printf("\nenter %d element", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    //find max value in array
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
       //find sum in array
        // printf("\n%d",arr[i]);
        sum = sum + arr[i];
        
    }
    //find avg of array
    avg = (float)sum / size;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            //find duplicate element in array
                if(arr[i]==arr[j]){
                    printf("\nduplicate element of array%d",arr[i]);
                }
                    
                }
            
            
        }
  
    printf("\ntotal of array element %d", sum);
    printf("\navg of array element %.2f", avg);
    printf("\n max of array %d",max);
    
    
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