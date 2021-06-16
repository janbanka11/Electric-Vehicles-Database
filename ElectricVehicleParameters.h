#include "libs.h"
class ElectricVehicleParameters {
private:
    std::string brand;
    int hp; // horsepower
    double range; // range of electric vehicle before the need of charging
public:
    explicit ElectricVehicleParameters(const std::string& brand_ = "NULL", const int hp_ = 0, const double range_ = 0);

    //getters
    std::string getBrand() const;
    int getHP() const;
    double getRange() const;

    //setters
    void setBrand(const std::string& brand_);
    void setHP(const int hp_);
    void setRange(const double range_);

    virtual void info() const;

    ~ElectricVehicleParameters() = default;
};


