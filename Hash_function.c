#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 11
#define EMPTY -1

int hashTable[TABLE_SIZE];

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void insert(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    while (hashTable[index]!= EMPTY) {
        index = (index + 1) % TABLE_SIZE;
        if (index == originalIndex) {
            printf("Hash table is full. Cannot insert %d \n", key);
            return;
        }
    }
    hashTable[index] = key;
    printf("Inserted %d at index %d \n", key, index);
}

int search(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    while (hashTable[index]!= EMPTY) {
        if (hashTable[index] == key)
            return index;
        index = (index + 1) % TABLE_SIZE;
        if (index == originalIndex)
            break;
    }
    return -1;
}

void display() {
    int i;
    printf("\n Hash Table : \n");
    for(i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] == EMPTY)
            printf("Index %d : EMPTY \n", i);
        else
            printf("Index %d : %d \n", i, hashTable[i]);
    }
    printf("\n");
}

int main() {
    int num, key, i;
    for (i = 0; i < TABLE_SIZE; i++)
        hashTable[i] = EMPTY;
        
    printf("Hash Table Size is : %d \n", TABLE_SIZE);
    printf(" Enter the number of elements to insert (<= %d): ", TABLE_SIZE);
    scanf("%d", &num);
    printf(" Enter %d elements : \n", num);
    for(i = 0; i < num; i++) {
        scanf("%d", &key);
        insert(key);
    }
    
    display();
    
    printf("Enter a key to search:");
    scanf("%d", &key);
    int result = search(key);
    if (result!= -1)
        printf("Key %d found at index %d \n", key, result);
    else
        printf("Key %d not found in the hash table \n", key);
        
    return 0;
}
