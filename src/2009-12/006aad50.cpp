// from server: 63% by atomic.potato
struct S {
    char pad[0x18];
    int (__cdecl *fn)(int, int);
    int offset1c;
    int offset20;
    int method(int, int*);
};

int S::method(int a, int* b) {
    int* p = (int*)a;
    if (p != 0) {
        p = (int*)((char*)p - 0x1c);
    } else {
        p = 0;
    }
    int v = *b;
    int idx = this->offset20;
    int base = *(int*)((char*)p + 0xb4);
    int val = *(int*)(base + idx);
    val += this->offset1c;
    int (__cdecl *f)(int, int) = this->fn;
    return f(val + (int)p + 0xb4, v);
}
