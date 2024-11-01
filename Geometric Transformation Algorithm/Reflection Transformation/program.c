#include <stdio.h>
#include <ctype.h>

void reflect(int x[], int y[], int n, char axis) {
    printf("\nReflected Coordinates:\n");
    for (int i = 0; i < n; i++) {
        int newX = x[i], newY = y[i];

        if (axis == 'X' || axis == 'B') newY = -y[i];  // Reflect across X-axis
        if (axis == 'Y' || axis == 'B') newX = -x[i];  // Reflect across Y-axis

        printf("(%d, %d) -> (%d, %d)\n", x[i], y[i], newX, newY);
    }
}

int main() {
    int n;
    char axis;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    int x[n], y[n];
    printf("Enter the coordinates of the points (x y):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    printf("Enter the axis of reflection (X, Y, or B for both): ");
    scanf(" %c", &axis);  // Space before %c to skip newline character
    axis = toupper(axis); // Handle both lowercase and uppercase inputs

    reflect(x, y, n, axis);
    return 0;
}
