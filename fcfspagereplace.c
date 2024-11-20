#include <stdio.h>

int main() {
    int i, j = 0, n, a[50], frame[10], no, k, flag, count = 0;

    printf("\nENTER THE NUMBER OF PAGES:\n");
    scanf("%d", &n);

    printf("\nENTER THE PAGE NUMBERS:\n");
    for (i = 0; i < n; i++) // Start loop from 0 for correct array indexing
        scanf("%d", &a[i]);

    printf("\nENTER THE NUMBER OF FRAMES:\n");
    scanf("%d", &no);

    // Initialize frames
    for (i = 0; i < no; i++)
        frame[i] = -1; // Use -1 to indicate an empty frame

    printf("\nPage Number\tFrames\n");

    for (i = 0; i < n; i++) {
        printf("%d\t\t", a[i]); // Print the current page number
        flag = 0; // Reset flag for each page

        // Check if page already exists in any frame
        for (k = 0; k < no; k++) {
            if (frame[k] == a[i]) {
                flag = 1; // Page hit
                break;
            }
        }

        // If page fault occurs
        if (flag == 0) {
            frame[j] = a[i];        // Replace page in FIFO order
            j = (j + 1) % no;       // Update frame pointer
            count++;                // Increment page fault count
        }

        // Print the frame status
        for (k = 0; k < no; k++) {
            if (frame[k] != -1)
                printf("%d ", frame[k]);
            else
                printf("- "); // Empty frame display
        }
        printf("\n");
    }

    printf("\nTotal Page Faults: %d\n", count);
    return 0;
}
