// from server: 67% by atomic.potato
struct MyXTPCommandBars {
    char pad0[0x80];
    int count;
    int* items;
    int find(int);
    int indexOf(int);
};

int MyXTPCommandBars::indexOf(int value) {
    int n = count;
    int i = 0;
    if (n > 0) {
        do {
            if (find(i) == value)
                return i;
            ++i;
        } while (i < n);
    }
    return -1;
}
