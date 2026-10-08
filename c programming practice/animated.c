#include <stdio.h>
#include <unistd.h> // Required for usleep

// Call this function instead of standard printf for your final output
void animate_output(const char *text) {
    while (*text) {
        putchar(*text++);
        fflush(stdout); // Forces the letter to show instantly
        usleep(40000);  // Delay in microseconds (40ms per letter)
    }
    printf("\n");
}

int main() {
    // 1. Your normal program logic
    int a = 5;
    int b = 10;
    int result = a + b;

    // Buffer to hold the final text
    char output_buffer[100];
    sprintf(output_buffer, "Calculations complete! The final result is: %d", result);

    // 2. Animate the result
    animate_output(output_buffer);

    return 0;
}
