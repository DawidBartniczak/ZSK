#include <iostream>
using namespace std;

class Car {
    private:
        string VIN, insuranceNumber;
    public:
        string licencePlate, brand, model, color, engine, fuel, type, transmission;
        unsigned short int productionYear, power, doors, axles, wheels;

        void setVIN(string);
        void setInsuranceNumber(string);

        string getVIN();
        string getInsuranceNumber();

        Car(string, string, string, string, string, string, string, string, string, string, unsigned short int, unsigned short int, unsigned short int, unsigned short int, unsigned short int);
        Car(string, string, string, string, string, string, string, string, unsigned short int, unsigned short int, unsigned short int, unsigned short int, unsigned short int);
};

void Car::setVIN(string pVIN) {
    VIN = pVIN;
}
void Car::setInsuranceNumber(string pInsuranceNumber) {
    insuranceNumber = pInsuranceNumber;
}

string Car::getVIN() {
    return VIN;
}
string Car::getInsuranceNumber() {
    return insuranceNumber;
}

Car::Car(string pVIN, string pInsuranceNumber,
         string pLicencePlate, string pBrand, string pModel, string pColor, string pEngine, string pFuel, string pType, string pTransmission,
         unsigned short int pProductionYear, unsigned short int pPower, unsigned short int pDoors, unsigned short int pAxles,
         unsigned short int pWheels):
             VIN {pVIN}, insuranceNumber {pInsuranceNumber},
             licencePlate {pLicencePlate}, brand {pBrand}, model {pModel}, color {pColor}, engine {pEngine}, fuel {pFuel}, type {pType},
             transmission {pTransmission}, productionYear {pProductionYear}, power {pPower}, doors {pDoors}, axles {pAxles}, wheels {pWheels}
        { }

Car::Car(string pLicencePlate, string pBrand, string pModel, string pColor, string pEngine, string pFuel, string pType, string pTransmission,
         unsigned short int pProductionYear, unsigned short int pPower, unsigned short int pDoors, unsigned short int pAxles,
         unsigned short int pWheels):
             licencePlate {pLicencePlate}, brand {pBrand}, model {pModel}, color {pColor}, engine {pEngine}, fuel {pFuel}, type {pType},
             transmission {pTransmission}, productionYear {pProductionYear}, power {pPower}, doors {pDoors}, axles {pAxles}, wheels {pWheels}
        { }

int main() {
    Car toyota("VIN1", "INS123", "PO 342GH", "Toyota", "Yaris II", "WHITE", "1.4 D4D", "DIESEL", "CAR", "MANUAL", 2008, 90, 3, 2, 4);

    Car *man = new Car("VIN2", "INS321", "PZ G424O", "MAN", "TGX 18.360", "RED", "MAN EURO5", "DIESEL", "TRUCK", "AUTO", 2012, 360, 1, 2, 4);

    Car solaris("PO TA402", "Solaris", "Urbino 12 III", "GREEN", "Cummins ISB6,7", "DIESEL", "BUS", "AUTO", 2013, 280, 3, 2, 4);
    solaris.setVIN("VIN3");
    solaris.setInsuranceNumber("INS543");

    Car *man2 = new Car("PO AC935", "MAN", "NL283", "GREEN", "MAN D0836 LUH 01", "DIESEL", "BUS", "AUTO", 2004, 280, 3, 2, 4);
    man2->setVIN("VIN4");
    man2->setInsuranceNumber("INS946");

    cout << man->getVIN() << endl << toyota.getInsuranceNumber() << endl << solaris.getVIN() << endl << man2->getInsuranceNumber();

    return 0;
}
