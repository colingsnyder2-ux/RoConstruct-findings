// from server: 79% by atomic.potato
struct W4ChatOption {
    char pad0[0x68];
    int* begin;
    int* end;
    int* getIndex(int);
    int getValue(int);
};

int W4ChatOption::getValue(int a) {
    int idx = *getIndex(a);
    if (idx < 0)
        return 0;
    if ((unsigned)idx >= (unsigned)((end - begin)))
        return 0;
    return begin[idx];
}
