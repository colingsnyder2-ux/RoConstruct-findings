// from server: 21% by atomic.potato
struct Inner {
    char pad[8];
    int f(int);
};

struct S {
    char pad0[8];
    Inner inner;
    int field_c;
    int field_10;
    int field_14;
    int g();
    int h();
    int k();
    bool func(int);
};

bool S::func(int n) {
    field_c = 0;
    field_10 = 0;
    field_14 = 0;
    if (n == 0) {
        return false;
    }
    if (g() < (unsigned)n) {
        h();
    } else {
        field_c = inner.f(n);
        field_10 = field_c;
        field_14 = field_c + n * 0x28;
    }
    return true;
}
