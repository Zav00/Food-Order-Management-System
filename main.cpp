#include <iostream>
#include <fstream>
#include "Restaurant.h"
#include "Customer.h"
#include "Order.h"



std::string getCurrectData () {
    return "11-06-2023";
}
std::string  generateBill (const Order &order) {
    std::string bill = "______Bill_________\n";
    bill += "Customer Name" + order.getCustomerName() + "\n";
    bill += "Restaurant Name" + order.getRestaurantName() + "\n";
    bill += "Order Items:\n";
    for (const std::string& item : order.getItems()) {
        bill += "_" + item + "\n";
    }
    bill += "Total Amount\n";
    bill +="__________";
    return bill;
}
void saveillToFile (const Order &order) {
    std::string fileName = order.getRestaurantName() + getCurrectData() +  ".txt";
    std::ofstream file (fileName);
    if (file.is_open()) {
        file << generateBill(order);
        file.close();
        std::cout << "Bill saved in File" << std::endl;
    } else {
        std::cout << "ERROR:Unable saved in File" << std::endl;
    }
}
int main() {
        std::vector<std::string> menu = {"Item 1", "Item 2", "Item 3"};
        Restaurant restaurant("Restaurant A", menu, "Location A");
        Customer customer("John Doe", "john@example.com", "Credit Card");
        std::vector<std::string> items = {"Item 1", "Item 3"};
        Order order(customer.getName(), restaurant.getName(), items);
        std::string status = "Preparing";
        int estimatedDeliveryTime = 30;
        std::cout << "Order Status: " << status << std::endl;
        std::cout << "Estimated Delivery Time: " << estimatedDeliveryTime << " minutes" << std::endl;
        std::string bill = generateBill(order);
        std::cout << bill << std::endl;
    saveillToFile(order);

        return 0;
    }
