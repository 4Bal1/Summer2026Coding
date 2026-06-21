#ifndef CALCEXP_H
#define CALCEXP_H

#pragma once

class CalcExp
{
public:
    CalcExp();
    ~CalcExp();
    double TotExpense;
    void setValues(double, double, double, double, double);
    void CalcTotGallons();
    void CalcGasExp();
    void CalcTotExpense();
    double getTotMiles();
    double getGasPrice();
    double getMPG();
    double getTotGallons();
    double getTotGasPrice();
    double getTotExpense();

private:
    double TotMiles;
    double GasPrice;
    double MilesPerGallon;
    double ParkFees;
    double TollFees;
    double TotGal;
    double TotGasExp;
};

#endif