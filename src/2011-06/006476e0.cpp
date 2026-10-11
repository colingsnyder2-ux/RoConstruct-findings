// from server: 61% by atomic.potato
struct X_006476e0 {
    char pad_0[0x18];
    int f_18;
    int f_1c;
    int f_20;
    void method(int, int*);
};

void X_006476e0::method(int a, int* b) {
    X_006476e0* p;
    if (a != 0) {
        p = (X_006476e0*)((char*)a - 0x1c);
    } else {
        p = 0;
    }
    int idx = *b;
    int off = f_20;
    int* base = (int*)((char*)p + 0xb4);
    int val = *(int*)((char*)base + off);
    val += f_1c;
    void (*fn)(int) = (void (*)(int))f_18;
    fn((int)((char*)base + val));
}

void func_006476e0(X_006476e0* self, int a, int* b) {
    self->method(a, b);
}
