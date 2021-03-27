/*
 * "author Samantha Mavunga
 * Code to print lower triangular and upper triangular matrix
 * 
*/
#include <cstdlib>
#include <iostream>
#include <cmath>


using namespace std; 

/*
*The main generates and stores a lower triangular array A[N][N] for a given N.
*The elements of the lower triangular array are to be stored in 
* consecutive locations of a 1-dimensional array B[]
* definitely of size much less than N2
* as illustrated in the diagram
*/

int LinearINdex(int i, int j);
int* InverseIndx(int indexEle);

int main() 
{

 /* printing lower triangular matrix for 8x8
  *exclude the zeros in coungting
  */

    int row,column;
//variables declaration
  row = 8;
  column = 8;
  int matrix[row][column];
  
  //generating random numbers
  int randomNumber;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
    //this section will generate random numbers not greater than 10000
		randomNumber = (rand() % 1000) + 1;
		matrix[i][j] = randomNumber;
         }
  }
  cout<<"\n";//for another line
  
   //l Use 6 and 5 to balance the elements of lower triangular to be 20

  cout << "First 20 elements of lower 8 by 8 triangular matrix \n"; 
  for (int i = 0; i < 6; i++) 
  { 
    for (int j = 0; j < 5; j++) 
    { 
      if (i < j) 
      { 
        cout << "0"<< " "; //print zeros on the upper triangular
      } 
      else
      cout << matrix[i][j] << " "; 
    } 
    cout << endl; 
	}

	//traversing through the NxN matrix to put the elements in an array
	int size = ((1+row)*row)/2;//formular for the size of the lower triangular matrix
	int B[size];
	
	int b=0;
	for(int i=0;i<row;i++)
	{
		for (int j=0; j<i+1; j++)
		{
			B[b] = matrix[i][j];
			b++;
		}
	}
	
	//printing the elements in the array
	cout << "First 20 elements new array 1D B[]: ";
	for (int i=0; i<20;++i)
	{
		cout << B[i] <<" ";
	}
	
	// finding the index of an element in 1D
	cout<<"index of an element in 1D array: ";
	cout<<LinearINdex(3, 2)<< endl;
	
	cout<<"index of an element in the 2D array: ";
	cout<<InverseIndx(B[8])<<endl;
	
	
	
	/* printing lower triangular matrix for 32 by 32
    *exclude the zeros in coungting
  */
    
  int row1,column1;

  row1 = 32;
  column1 = 32;
  int matrix1[row1][column1];
  
  //generating random numbers
  int randomNumber1;
  for(int i=0;i<row1;i++)
  {
    for(int j=0;j<column1;j++)
    {
    //this section will generate random numbers not greater than 10000
		randomNumber1 = (rand() % 1000) + 1;
		matrix1[i][j] = randomNumber1;
          }
  }
  cout<<"\n";
  
  // l Use 6 and 5 to balance the elements of lower triangular to be 20

    cout << "First 20 elements of the 32 by 32 lower triangular \n"; 
  for (int i = 0; i < 6; i++) 
  { 
    for (int j = 0; j < 5; j++) 
    { 
      if (i < j) 
      { 
        cout <<"0"<<" "; 
      } 
      else
      cout << matrix1[i][j] << " "; 
    } 
    cout << endl; 
	}

	//traversing through N*N matrix
	int size1 = ((1+row1)*row1)/2;
	int B1[size1];
	
	int b1=0;
	for(int i=0;i<row1;i++)
	{
		for (int j=0; j<i+1; j++)
		{
			B1[b1] = matrix[i][j];
			b1++;
		}
	}
	
	//printing the elements in the array
	cout << "array 1D B[]: ";
	for (int i=0; i<20;++i)
	{
		cout << B1[i] <<" ";
	}
	
	// finding the index of an element in 1D
	cout<<"index of an element 1Dimensional: ";
	cout<<LinearINdex(10, 6)<< endl;
	
	cout<<"index of an element in 2Dimensional : ";
	cout<<InverseIndx(B1[20])<<endl;
	
	
   /* printing lower triangular matrix for 32 by 32
    *exclude the zeros in coungting
  */
	
    int row2,column2;

	row2 = 128;
	column2 = 128;
	int matrix2[row2][column2];
  
  //generating random numbers
	int randomNumber;
	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<column2;j++)
    {
		randomNumber2 = (rand() % 1000) + 1;
		matrix1[i][j] = randomNumber2;
          }
	}
	cout<<"\n";
   
   
  /*printing lower triangular matrix
  *l Use 6 and 5 to balance the elements of lower triangular to be 20
  */
	cout << "First 20 elements of the 128 by 128 lower triangular \n"; 
	for (int i = 0; i < 6; i++) 
	{ 
		for (int j = 0; j < 5; j++) 
		{ 
			if (i < j) 
		{ 
			cout <<"0"<<" "; 
		} 
		else
		cout << matrix2[i][j] << " "; 
		} 
		cout << endl; 
	}

	//traversing through the NxN matrix 
	int size2 = ((1+row2)*row2)/2;
	int B2[size2];
	
	int b2=0;
	for(int i=0;i<row2;i++)
	{
		for (int j=0; j<i+1; j++)
		{
			B2[b2] = matrix[i][j];
			b2++;
		}
	}
	
	//printing the first 20 elements in the array
	cout << "new array 1D B[]: ";
	for (int i=0; i<20;++i)
	{
		cout << B2[i] <<" ";
	}
	
	// finding the index of an element in 1D
	cout<<"index of an element in 1Dimensional: ";
	cout<<LinearINdex(24, 15)<< endl;
	
	cout<<"index of an element in the 2Dimensional: ";
	cout<<InverseIndx(B2[24])<<endl;
  }
  
  
// return index of an element in 2Dimensiona in the 1Dimensional
int LinearINdex(int i, int j)
{
	return (i*(i+1)/2) +j;//index of elements in B
}

//gets index of an element position in 1 
//Dimensional and return position in 2 dimentional
int* InverseIndx(int indexEle){
    int a;
    
    /*MALLOC
    *allocates a block of uninitialized memory and returns a void pointer 
    *of the allocated memory block succeeds. 
    */
    int* indices = (int*) malloc(sizeof(int)*2);
    
    // finding a proper index
    for(int i=1;i<=indexEle;i++){
        for(int j=0;j<=i;j++){
            a++;
            
            //first row
            if(a==indexEle){
                indices[0]=i;
                indices[1]=j;
            }
        }
    }
    return indices;
}
