#include <stdio.h>

int main() {
    int limit;

    printf("🌟 Welcome, apprentice! How high shall we count? ");
    scanf("%d", &limit);

    printf("🔮 Counting to %d...\n", limit);
    for (int i = 1; i <= limit; i++) {
        printf("✨ %d\n", i);
    }

    printf("🧙‍♂️ The ritual is complete.\n");
    return 0;
}