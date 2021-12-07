#include <iostream>


using namespace std;

int main()

{  
    int i,r,t,y,u,j,fact1=1,fact2=1,fact3=1,fact4=1,fact5=1,fact6=1,number1,number2,number3,number4,number5,number6;   
   
  cout<<"Enter a number between 1 and 10 (or 0 to end program): ";    
 cin>>number1;   
 for(i=1;i<=number1;i++){    
      fact1=fact1*i;    
  } 
  
 cout<<"Factorial of " <<number1<<" is "<<fact1<<endl;
 
  cout<<"Enter a number between 1 and 10 (or 0 to end program): ";    
 cin>>number2;   

 for(r=1;r<=number2;r++){    
       fact2=fact2*r;  
  } 
  
 cout<<"Factorial of " <<number2<<" is "<<fact2<<endl; 
 
  cout<<"Enter a number between 1 and 10 (or 0 to end program): ";    
 cin>>number3;   
 for(t=1;t<=number3;t++){    
       fact3=fact3*t;   
  } 
 cout<<"Factorial of " <<number3<<" is "<<fact3<<endl; 
 
  cout<<"Enter a number between 1 and 10 (or 0 to end program): ";    
 cin>>number4;   
 for(y=1;y<=number4;y++){    
       fact4=fact4*y;   
  } 
 cout<<"Factorial of " <<number4<<" is "<<fact4<<endl; 
 
  cout<<"Enter a number between 1 and 10 (or 0 to end program): ";    
 cin>>number5;  
 {
 if (number5 > 10)
        cout << "Error! Factorial of a negative number doesn't exist.";
       }
 for(u=1;u<=number5;u++){    
       fact5=fact5*u; 
       
           
  }
 cout<<"Factorial of " <<number5<<" is "<<fact5<<endl; 
 
  cout<<"Enter a number between 1 and 10 (or 0 to end program): ";    
 cin>>number6;   
 for(j=1;j<=number6;j++){    
       fact6=fact6*j;   
  } 

  cout << "Good bye !";
  

  return 0;  

}
