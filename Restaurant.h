#ifndef FOOD_ORDER_MANAGEMENT_SYSTEM_RESTAURANT_H
#define FOOD_ORDER_MANAGEMENT_SYSTEM_RESTAURANT_H
#include <string>
#include <vector>
class Restaurant {
private:
    std::string name;
    std::vector<std::string> menu;
    std::string location;
public:
    Restaurant(const std::string &name, const std::vector<std::string> &menu, const std::string &location) : name(name),
                                                                                                             menu(menu),
                                                                                                             location(

                                                                                                                     location) {}



    const std::string &getName() const {
        return name;
    }

    const std::vector<std::string> &getMenu() const {
        return menu;
    }

    const std::string &getLocation() const {
        return location;
    }
};
#endif //FOOD_ORDER_MANAGEMENT_SYSTEM_RESTAURANT_H
