Array implementation in stack operations 

#include <stdio.h>   
int stack[100],i,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
void main ()  
{  
    printf("Enter the number of elements in the stack : ");   //entering the size of the stack
    scanf("%d",&n);  
    printf("*********Stack operations using array*********");  
  
printf("\n----------------------------------------------\n");  
    while(choice != 4)  //runs when it is in 1,2,3 th cases
    {  
        printf("\nChose one from the below options...\n");  //initializing the switch case in here 
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  //inserting into stack
                break;  
            }  
            case 2:  
            {  
                pop();  //deleting from the stack
                break;  
            }  
            case 3:  
            {  
                show();  //displaying the elements from the stack
                break;  
            }  
            case 4:   
            {  
                printf("Exited....");  //exit from it 
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}   
  
void push ()  
{  
    int val;      
    if (top == n ) //if no of elements and the stack size equals :  
    printf("\n Overflow");   //print ( overflow )
    else   
    {  
        printf("Enter the value :\n");  
        scanf("%d",&val);         
        top = top +1;   //adding the values in the stack
        stack[top] = val;   //in the stack
    }   
}   
  
void pop ()   
{   
    if(top == -1)   //if the stack is already empty
    printf("Underflow");  //print (underflow)
    else  
    top = top -1;   //pop the elements
}   
void show()  
{  
    for (i=top;i>=0;i--)  //displays from the top element
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  //displays empty if it is empty
    }  
}  
