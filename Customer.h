
#ifndef FOOD_ORDER_MANAGEMENT_SYSTEM_CUSTOMER_H
#define FOOD_ORDER_MANAGEMENT_SYSTEM_CUSTOMER_H
#include <string>
class Customer {
private:
    std::string name;
    std::string contactInfo;
    std::string paymentMethod;
public:
    Customer(const std::string &name, const std::string &contactInfo, const std::string &paymentMethod) : name(name),
                                                                                                          contactInfo(
                                                                                                                  contactInfo),
                                                                                                          paymentMethod(
                                                                                                                  paymentMethod) {}

    const std::string &getName() const {
        return name;
    }

    const std::string &getContactInfo() const {
        return contactInfo;
    }

    const std::string &getPaymentMethod() const {
        return paymentMethod;
    }

};
#endif //FOOD_ORDER_MANAGEMENT_SYSTEM_CUSTOMER_H
