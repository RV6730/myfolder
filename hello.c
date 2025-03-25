#include <stdio.h>

int main() {
    int ch, qty, total = 0;
    printf("\n\tMENU CARD\n");
    printf("\t\t1.COFFEE        Rs:15\n");
    printf("\t\t2.TEA           Rs:10\n");
    printf("\t\t3.COLD COFFEE   Rs:25\n");
    printf("\t\t4.MILK SHAKE    Rs:50\n");
    printf("\n Enter Your choice  : ");
    scanf("%d", &ch);
    
    switch(ch) {
        case 1:
            printf("\nYou have selected Coffee\n");
            printf("Enter The Qty : ");
            scanf("%d", &qty);
            total += qty * 15;
            break;
        case 2:
            printf("\nYou have selected Tea\n");
            printf("Enter The Qty : ");
            scanf("%d", &qty);
            total += qty * 10;
            break;
        case 3:
            printf("\nYou have selected Cold Coffee\n");
            printf("Enter The Qty : ");
            scanf("%d", &qty);
            total += qty * 25;
            break;
        case 4:
            printf("\nYou have selected Milk Shake\n");
            printf("Enter The Qty : ");
            scanf("%d", &qty);
            total += qty * 50;
            break;
        default:
            printf("\nInvalid Product Selection\n");
            break;
    }
    printf("\nTotal amount : %d", total);
    return 0;
}

