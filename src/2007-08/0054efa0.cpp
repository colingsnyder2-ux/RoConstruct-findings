// from server: 37% by colin
struct S {
    char pad0[0x14];
    int* field14;
    char pad18[0xc];
    int* field24;
    char pad28[0xc];
    int* field34;
    char pad38[0x10];
    int field48;
    int field4c;
    char pad50[0x4];
    unsigned int field54;
    int method(int);
};

int S::method(int arg) {
    unsigned int v = field54 >> 3;
    if ((v & 1) != 0) {
        if (*field24 == 0) {
            int (S::*pmf)(int) = 0;
            void** vt = *(void***)this;
            int (*fn)(S*) = (int (*)(S*))vt[0x58 / 4];
            fn(this);
        }
    }
    if (arg == -1) {
        return 0;
    }
    unsigned int v2 = field54 >> 3;
    if ((v2 & 1) != 0) {
        int a = *field24;
        int b = *field34;
        int sum = b + a;
        if (a == sum) {
            int diff = *field24 - *field14;
            if (diff > 0) {
                int c = field48;
                int d = field4c;
                *field14 = c;
                *field24 = c;
                *field34 = d + c - c;
            }
            int a2 = *field24;
            int b2 = *field34;
            int sum2 = b2 + a2;
            if (a2 == sum2) {
                return -1;
            }
        }
        *(char*)*field24 = (char)arg;
        *field34 -= 1;
        *field24 += 1;
    }
    return arg;
}
