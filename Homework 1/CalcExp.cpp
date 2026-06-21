#include "CalcExp.h"


CalcExp::CalcExp()
{

}
CalcExp::~CalcExp()
{

}

void CalcExp::setValues(double TotMiles, double GasPrice, double MilesPerGallon, double ParkFees, double TollFees)
{
    this->TotMiles = TotMiles;
    this->GasPrice = GasPrice;
    this->MilesPerGallon = MilesPerGallon;
    this->ParkFees = ParkFees;
    this->TollFees = TollFees;
}

void CalcExp::CalcTotGallons()
{
    this->TotGal = this->TotMiles / this->MilesPerGallon;
}

void CalcExp::CalcGasExp()
{
    this->TotGasExp = this->TotGal * this->GasPrice;
}

void CalcExp::CalcTotExpense()
{
    this->TotExpense = this->TotGasExp + this->ParkFees + this->TollFees;
}

double CalcExp::getTotMiles()
{
    
    return this->TotMiles;
}

double CalcExp::getGasPrice()
{
    return this->GasPrice;
}

double CalcExp::getMPG()
{
    return this->MilesPerGallon;
}

double CalcExp::getTotGallons()
{
    return this->TotGal; 
}

double CalcExp::getTotGasPrice()
{
    return this->TotGasExp;
}

double CalcExp::getTotExpense()
{
    return this->TotExpense;
}



