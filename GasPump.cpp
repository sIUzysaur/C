#include<iostream>
#include<windows.h>

// class section
class GasPump{

private:

    float Liter;
    char Reset;

public:

    float PriceAction(){

    do{
        std::cout << "\n \n \n \t \t \t ***** GAS STATION *****";
        std::cout << "\n \n Enter Liter(s): ";
        std::cin >> Liter;

        for(float Amount = 1; Amount <= Liter; Amount++){
            Sleep(200);
            system("cls");
            std::cout << "\n \n \n \t \t \t ***** GAS STATION *****\n";
            std::cout << "\n  Liter:    \t" << Amount << " Liters" <<std::endl;
            std::cout << "\n  Price per Liter: PhP 62.00" <<std::endl;
            std::cout << "\n  Price:    \t" << Amount * 62.00 <<std::endl;
        }

        std::cout << "\n  Press X - RESET: ";
        std::cin >> Reset;

    }while(Reset == 'X' || Reset == 'x');
        std::cout << "\n  Invalid Input!" << std::endl;
        system("pause");

    return Liter;
    }

};
// class section end


// int main section
int main(){

    GasPump GasPriceAction;
    GasPriceAction.PriceAction();

    return 0;

}
// int main section end