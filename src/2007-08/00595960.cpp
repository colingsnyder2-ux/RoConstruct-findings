// from server: 92% by colin
struct type_info;

extern "C" {
    int __cdecl func_00631392(int);
    int __stdcall func_0077e708(int, const type_info*);
}

extern type_info type_info_008a5a94;

struct Inner {
    char pad[0x318];
    int field_318;
};

struct Mid {
    char pad[0x188];
    Inner* inner;
};

struct S {
    char pad[0xc];
    Mid* mid;
    bool f();
};

bool S::f()
{
    Inner* inner = mid->inner;
    int v = inner->field_318;
    if (v != 0) {
        int r = func_00631392(v);
        func_0077e708(r, &type_info_008a5a94);
        return true;
    }
    return false;
}
