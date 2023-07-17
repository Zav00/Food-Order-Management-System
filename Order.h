
#ifndef FOOD_ORDER_MANAGEMENT_SYSTEM_ORDER_H
#define FOOD_ORDER_MANAGEMENT_SYSTEM_ORDER_H
#include <string>
#include <vector>
class Order {
    std::string customerName;
    std::string restaurantName;
    std::vector<std::string> items;
public:
    Order(const std::string &customerName, const std::string &restaurantName, const std::vector<std::string> &items)
            : customerName(customerName), restaurantName(restaurantName), items(items) {}

    const std::string &getCustomerName() const {
        return customerName;
    }

    const std::string &getRestaurantName() const {
        return restaurantName;
    }
    const std::vector<std::string> &getItems() const {
        return items;
    }
};
#endif //FOOD_ORDER_MANAGEMENT_SYSTEM_ORDER_H
