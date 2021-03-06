#pragma once
#include <string>

class CustomerHomeAdress
{
private:
    std::string m_customerCountry;
    std::string m_customerCity;
    std::string m_customerPostalCode;
    std::string m_customerStreet;
    std::string m_customerStreetNumber;
public:
    CustomerHomeAdress(const std::string, const std::string, const std::string, const std::string, const std::string);
    CustomerHomeAdress();
    std::string GetCustomerCountry()const;
    std::string GetCustomerCity()const;
    std::string GetCustomerPostalCode()const;
    std::string GetCustomerStreet()const;
    std::string GetCustomerStreetNumber()const;

    void SetCustomerCountry(const std::string);
    void SetCustomerCity(const std::string);
    void SetCustomerPostalCode(const std::string);
    void SetCustomerStreet(const std::string);
    void setCustomerStreetNumber(const std::string);

};

