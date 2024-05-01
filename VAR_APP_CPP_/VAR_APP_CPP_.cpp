
#include <iostream>
#include <string>

int main()
{
    /**/
    // O VARIABILA SE DECLARA TIP_DATA NUME_VARIABILA
    int my_int; // SE POATE SCRIE SI myInt
    int anulCurent;
    bool bIsValid;
    char grade;
    std::string sPlayerName;
    const float pi = 3.14;
    
    my_int = 20;
    bIsValid = true;
    grade = 'A';
    sPlayerName = "Taifun20";

    std::cout << "Level : " << my_int << std::endl;
    std::cout << "Is in game ? : " << bIsValid << std::endl;
    std::cout << "Grade is : " << grade << std::endl;
    std::cout << "This is a Read Only var. : " << pi << std::endl;

    std::cout << "Size of a char : " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of a int : " << sizeof(int) << " bytes" << std::endl;

    std::cout << "Va rugam introduceti anul curent" << std::endl;
    std::cin >> anulCurent;
    std::cout << "Suntem in anul : " << anulCurent << std::endl;

    

    /*
    Tema:
    Calculator de varsta

    setati o variabila constanta cu anul current
    cereti utilizatorului sa isi introduca anul nasterii
    printati pe ecran varsta lui

    */

    
    /**/
    const int intAnulCurent = 2024;
    int intVarstaCurenta;
    int intAnulNasterii;

    std::cout << "Introduceti varsta" << std::endl;
    std::cin >> intVarstaCurenta;
    intAnulNasterii = intAnulCurent - intVarstaCurenta;
    std::cout << "Anul nasterii este : " << intAnulNasterii << std::endl;
    

    //////////////////////////////////////////////////////////////////////

    /**/
    int var1 = 35;
    int var2 = 20;

    int suma = var1 + var2;
    int scadere = var1 - var2;
    int inmultire = var1 * var2;
    int impartire = var1 / var2;
    
    int modula = var1 % var2; // modula ne da restul impartirii (se poate verifica daca un numar este cu rest)

    int calcul = var1 + var2 * var2;
    int calcul2 = var1 + (var2 * var2);
    int calcul3 = calcul * calcul2;
    


    /*
    Tema Simpla : Printati pe ecran si jucativ cu valorile variabilelor
    Tema Extra : Creati un program in care se poate introduce 3
    preturi si sa calculeze media preturilor
    */


    /**/
    int intPret_01_;
    int intPret_02_;
    int intPret_03_;
    int intMediaPret_;
    std::string sDescriere;

    sDescriere = "Cu acest program calculam media dintre 3 numere !";

    std::cout << sDescriere << std::endl;

    std::cout << "Introduceti primul pret : "; std::cin >> intPret_01_;
    std::cout << "Introduceti al doilea pret : "; std::cin >> intPret_02_;
    std::cout << "Introduceti al treilea pret : "; std::cin >> intPret_03_;
    
    intMediaPret_ = (intPret_01_ + intPret_02_ + intPret_03_) / 3;
    std::cout << "Media preturilor este de : " << intMediaPret_ << std::endl;
    


    /*
    Comparatori

    <   Mai mic
    >   Mai mare
    <=  Mai mic sau egal
    >=  Mai mare sau egal
    ==  Egal
    !=  Diferit
    ++  Incrementat | se aduna cu 1
    --  Decrementat | se scade cu 1
    var1 = var2++; | operator de incrementare postfix
    var1 = ++var2; | operator de incrementare prefix

    */
    
    

    /*
    Tema : minicalculator, utilizatorul sa introduca 2 variabile si sa printati toate operatiile
            pe care le stim cu aceste 2 variabile


    DONE

    */

    // Pentru a nu printa 0 sau 1 folosim  "std::boolalpha"  asa va aparea true sau false 

    /*
    
    && Operatorul SI / AND
    || Operatorul SAU / OR
    !  Operatorul NEGATIE / NOT TRUE
    */
 
    int a = 5;
    int b = 10;
    int c = 15;
    if (a && b && c)

    a += b; // Se incrementeaza cu 10
    a -= b; // Se decrementeaza cu 10
    a *= b; // Se Inmulteste cu 10
    a /= b; // Se Imparte cu 10

    float numar = (float)10 /(float)3;
    int var = (int) numar;

    


    int k = 30; 
    float l; 
    l = k;     
    std::cout << l;
   

    return 0;
}