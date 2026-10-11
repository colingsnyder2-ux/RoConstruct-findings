// from server: 73% by colin
// roc 2007-08 005a02f0  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a02f0

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" int __cdecl sub_5d2600(int, int, int);

struct S {
    int __cdecl f(int, int);
};

int __cdecl S::f(int a, int b)
{
    if (b == 2) {
        type_info* ti = (type_info*)0x8a76e8;
        if (ti->operator==(*(type_info*)a))
            return a;
        return 0;
    }
    return sub_5d2600(a, b, 0);
}
