// from server: 1% by colin
struct Inner {
    char pad0[0x1d4];
    int field_1d4;
    int check();
    void call_69e890(int, int*, int, int, int);
};

struct Outer {
    char pad0[0x24];
    int field_24;
    char pad28[0x50];
    int field_78;
    char pad7c[0x158];
    Inner inner;
    int method_6e7980(int, int, int, int, int, int);
    int method_6e9b84(int, int, int, int, int, int);
};

extern "C" {
    int __stdcall sub_77ddb8(const char*);
    void __stdcall sub_77dd74(int*, int);
    void __stdcall sub_77ddbc(int*);
}

int Inner::check()
{
    return 0;
}
