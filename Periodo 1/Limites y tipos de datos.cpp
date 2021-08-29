#include <iostream>
#include <limits>

using namespace std;

int main(){
    
    int imin = numeric_limits<int>::min();
    int imax = numeric_limits<int>::max();
    
    cout << " imin = " << imin << endl;
    cout << " imax = " << imax << "\n";
    cout << " tamanio de int : " << sizeof(int) << endl;
    
    float fmin = std::numeric_limits<float>::min();
    float fmax = std::numeric_limits<float>::max();
    
    cout << " imin = " << fmin << endl;
    cout << " imax = " << fmax << "\n";
    cout << " tamanio de float : " << sizeof(float) << endl;
    
    char cmin = numeric_limits<char>::min();
    char cmax = numeric_limits<char>::max();
    
    cout << " cmin = " << fmin << endl;
    cout << " cmax = " << fmax << endl;
    cout << " tamanio de char : " << sizeof(char) << endl;
    
    return 0;
    
  
  
  
  
  
    
}
