// from server: 54% by atomic.potato
struct S {
    char pad[0x10];
    void (__thiscall *fn)(void*, int);
    char* base;
    void method(int, int*);
};

void S::method(int a, int* b) {
    int v = *b;
    if (a != 0) {
        void* p = this->base + (a - 0x1c);
        this->fn(p, v);
    } else {
        void* p = this->base + 0;
        this->fn(p, v);
    }
}
