/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Complejos
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear

   Fecha de creación: 05/11/2021
   Fecha de modificación: 05/11/2021
*/

#include <iostream>
#include "Complejo.h"
using namespace std;

int main(int argc, char** argv) {
    Complejo<int> A(1, 3), B(2, 4);
    Complejo<int> C;
    int x, y;
    cout << " suma de complejos " << endl;
    C = A + B;
    cout << C.getReal() << "  +  " << C.getImg() << "  i " << endl;
    C.setImg(0);
    C.setReal(0);
    cout << " resta de complejos " << endl;
    C = A - B;
    cout << C.getReal() << "  -  " << C.getImg() << "  i " << endl;
    cin.ignore();
    system("pause");
    return 0;
}