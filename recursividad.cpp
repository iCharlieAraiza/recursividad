#include <iostream>
using namespace std;

int suma(int);
int fibbo(int);
int factorial(int);
int arr(int[], int n, int length);

int main()
{
    int array[4] = {3,4,5,12};
    
    cout << "La suma de los primero 10 números enteros es "<<suma(10)<<endl;
    cout << "El factorial de 12  es " << factorial(12)<<endl;
    cout << "El valor de la serie de fibbonacci es " << fibbo(10) <<endl;
    arr(array, 0, 4);
    return 0;
}

// suma = n + suma(n-1);

int suma(int n){
    return (n==0) ? 0 : n + suma(n-1);
}


//factoria = n * factorial(n-1)

int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

//Fibo = fibo(n-1)+(n-2)

int fibbo(int n){
    if(n<2){
        return n;
    }else{
        return fibbo(n-2) + fibbo(n-1);
    }
}
//n = n +1;

int arr(int array[], int n, int length){
    cout<< n << ".- " << array[n] << " ";
        if(n >= length-1){
            return length-1;
        }else
            return arr(array, n+1, length);    
    }
    