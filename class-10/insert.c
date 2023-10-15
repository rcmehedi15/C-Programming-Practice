#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    // Shift elements to the right to make room for the new value
    for (int i = n; i >= pos; i--) {
        ar[i] = ar[i - 1];
    }

    ar[pos] = val;

    for (int i = 0; i <= n; i++) {
        printf("%d ", ar[i]); // Add a space after %d to separate the elements
    }

    return 0;
}
