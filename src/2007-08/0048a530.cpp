// from server: 61% by colin
// roc 2007-08 0048a530  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a530

extern "C" {
    int __cdecl sub_5f20f0(int, int, int);
}

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
    int f(int, int, int);
};

int S::f(int a, int b, int c) {
    if (c == 2) {
        type_info* ti = (type_info*)0x88ce80;
        bool eq = ti->operator==(*(const type_info*)&b);
        return eq ? b : 0;
    }
    return sub_5f20f0(a, c, 0);
}
