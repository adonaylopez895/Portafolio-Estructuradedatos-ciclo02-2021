#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
 	/* Ejercicio 1:  */
    double a, b, c , s, Area;
 	cout << "\nLA101217 ";
 	cout << "\nPrimer Ejercicio\n ";	
    cout << "\nPrimer lado: "; cin >> a;
    cout << "Segundo lado: "; cin >> b;
    cout << "Tercer lado: "; cin >> c;
    
    s = (a+b+c)/2;
    
    Area = sqrt(s*(s-a)*(s-b)*(s-c));
 
    if (a == b == c)
        cout << "\nEs un triangulo Equilatero y de area: "  <<  Area << endl << endl;
    else if (a == b || a == c || b == c)
        cout << "\nEs un triangulo Isosceles y de area: " <<  Area << endl << endl;
    else
        cout << "\nEs un triangulo Escaleno y de area: " <<  Area << endl << endl;
 

    
    /* Ejercicio 2:  */
    
    int num1,num2,num3,num4,num5,may;
    cout << "\nSegundo Ejercicio\n ";
 	cout<<"\nIngrese numero 1:";
 	cin>>num1;
 	cout<<"Ingrese numero 2:";
	 cin>>num2;
 	cout<<"Ingrese numero 3:";
 	cin>>num3;
 	cout<<"Ingrese numero 4:";
 	cin>>num4;
	 cout<<"Ingrese numero 5:";
 	cin>>num5;
	if(num1>num2)
 	may=num1;
 	else
 	may=num2;
 	if(num3>may)
 	may=num3;
 	if(num4>may)
 	may=num4;
 	if(num5>may)
 	may=num5;
 	cout<<"\n El numero mayor es: "<<may<< endl << endl;
 
    
    
    /* Ejercicio 3:  */
    int n;
 	float x,y=0,prom;
 	cout << "\nTercer Ejercicio\n ";
 	cout<<"\nIngrese la cantidad de numeros: ";cin>>n;
	for(int i=0;i<n;i++){
 	cout<<"Ingrese el numero "<<i+1<<": ";cin>>x;
	y=y+x;
 	}
 	prom=y/n;
 	cout<<"El promedio es: "<<prom;
 	
 	return 0;
    
    
}
