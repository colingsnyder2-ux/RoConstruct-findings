// from server: 77% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct Accoutrement {
    static int characterCanPickUpAccoutrement(int, int);
};

extern "C" int __cdecl func_005d2600(int, int, int);

int Accoutrement::characterCanPickUpAccoutrement(int a, int b)
{
    if (b == 2) {
        int r;
        if (*(const type_info*)0x8a2558 == *(const type_info*)a)
            r = a;
        else
            r = 0;
        return r;
    }
    return func_005d2600(a, b, 0);
}
