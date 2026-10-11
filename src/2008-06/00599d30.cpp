// from server: 57% by atomic.potato
struct S {
    char pad[0x18];
    int (__stdcall *fn)(int, int);
    char pad2[4];
    int idx;
    int base;
    int getValue(int, int);
};

int S::getValue(int a, int b) {
    S* p = (S*)a;
    if (p) {
        p = (S*)((char*)p - 0x14);
    } else {
        p = 0;
    }
    int* arr = *(int**)((char*)p + 0x134);
    int off = arr[idx];
    off += base;
    return fn(off + (int)p + 0x134, b);
}
