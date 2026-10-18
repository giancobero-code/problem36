#include <stdio.h>

int main() {
    float distance, orderAmount, deliveryFee, totalPayment;

    printf("Enter delivery distance (in km): ");
    scanf("%f", &distance);

    printf("Enter order amount: ");
    scanf("%f", &orderAmount);

    if (orderAmount >= 1500) {
        deliveryFee = 0;
    } else if (distance <= 5) {
        deliveryFee = 50;
    } else if (distance <= 10) {
        deliveryFee = 80;
    } else {
        deliveryFee = 120;
    }

    totalPayment = orderAmount + deliveryFee;

    printf("\n--- DELIVERY RECEIPT ---\n");
    printf("Order Amount: P%.2f\n", orderAmount);
    printf("Delivery Fee: P%.2f\n", deliveryFee);
    printf("Total Payment: P%.2f\n", totalPayment);

    return 0;
}