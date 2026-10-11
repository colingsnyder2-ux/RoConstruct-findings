// from server: 53% by atomic.potato
struct X_0043fc80 {
    char pad_0[8];
    int f_8;
    int f_c;
    void invoke(int a, int b);
};

void X_0043fc80::invoke(int a, int b) {
    int c;
    if (a != 0) {
        c = f_c + (a - 0x18);
    } else {
        c = f_c;
    }
    void (*fn)(int, int) = (void (*)(int, int))f_8;
    fn(c, *(unsigned char*)b);
}

void func_0043fc80(X_0043fc80* self, int a, int b) {
    self->invoke(a, b);
}
