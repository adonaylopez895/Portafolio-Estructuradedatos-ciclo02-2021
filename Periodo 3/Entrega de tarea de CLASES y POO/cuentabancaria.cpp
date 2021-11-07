#include "cuentabancaria.h"

using namespace std;

int main(){
		//Crear una cuenta bancaria
	CuentaBancaria miCuenta("A-480920", "Fernando Lopez", 2900.00);
	cout << "Titular: " << miCuenta.getNombreTitular() << endl;
	cout << "# Cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------------" << endl;
	
		//Creaando otra cuenta bancaria
	CuentaBancaria cuentaAmigo("B-156545", "Boris Lopez", 62900.00);
	cout << "Titular: " << miCuenta.getNombreTitular() << endl;
	cout << "# Cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------------" << endl;
	
		//Creaando otra cuenta bancaria
	CuentaBancaria cuentaNoValida("D-123445", "Damaris Aparicio", -600.00);
	cout << "Titular: " << miCuenta.getNombreTitular() << endl;
	cout << "# Cuenta: " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo: $" << miCuenta.getSaldo() << endl;
	cout << "----------------------------------------------" << endl;
	
	//Hacer un retiro de la cuenta miCuenta
	
	cout << "Quiero retirar $84 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(84);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << "-----------------------------------------------" << endl;
	
		//Hacer un retiro de la cuenta miCuenta mayor al saldo disponible
	
	cout << "Quiero retirar $3500 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(3500);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << "-----------------------------------------------" << endl;
	
		//Hacer un retiro de la cuenta miCuenta negativo
	
	cout << "Quiero retirar $-3500 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.retirar(-3500);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << "-----------------------------------------------" << endl;
	
	
		//Hacer un deposito a la cuenta miCuenta 
	
	cout << "Quiero depositar $6500 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.depositar(6500);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << "-----------------------------------------------" << endl;
	
			//Hacer un deposito negativo a la cuenta miCuenta 
	
	cout << "Quiero depositar $-6500 de la cuenta " << miCuenta.getNumeroCuenta() << endl;
	cout << "Saldo inicial: $" << miCuenta.getSaldo() << endl;
	miCuenta.depositar(-6500);
	cout << "Saldo luego de la operacion: $" << miCuenta.getSaldo() << endl;
	cout << "-----------------------------------------------" << endl;
}


