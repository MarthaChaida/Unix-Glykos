#include <stdio.h>
#include <string.h>

int main() {
    // Read protein sequences from standard input
    char seq[100];
    int length;

    printf("Enter protein sequence: ");
    scanf("%s", seq);
    length = strlen(seq);

    // Print the possible transmembrane segments
    printf("Transmembrane segments: ");
    for (int i = 0; i < length; i++) {
        if (seq[i] =='A' || seq[i] =='C' || seq[i] =='F' || seq[i] =='I' || seq[i] =='L' || seq[i] =='M' || seq[i] =='P' || seq[i] =='V' || seq[i] =='W' || seq[i] =='Y') {
            int j = i + 1;
            while (seq[i] =='A' || seq[i] =='C' || seq[i] =='F' || seq[i] =='I' || seq[i] =='L' || seq[i] =='M' || seq[i] =='P' || seq[i] =='V' || seq[i] =='W' || seq[i] =='Y') {
                j++;
            }
            printf("%.*s ", j - i, seq + i);
            i = j - 1;
        }
    }
    printf("\n");

    return 0;
}
