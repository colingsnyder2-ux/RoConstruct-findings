// from server: 42% by atomic.potato
struct VClientBoundFuncDesc {
    char pad0[0x38];
    int (__stdcall *field38)(int);
    char pad3c[0x40 - 0x3c];
    int field40;
    int field44;
    void invoke(int, int);
};

struct Arg {
    int a;
    int b;
};

extern "C" int __stdcall sub_6a17c6(int, int, int, int, int);
extern "C" void __stdcall sub_6a158c(int, int);
extern "C" int __stdcall sub_56ea60(int);
extern "C" void __stdcall sub_802864(int);

void VClientBoundFuncDesc::invoke(int a, int b)
{
    int v8;
    int vc;
    int v24;
    int v2c;

    v8 = field40;
    if (field44) {
        vc = (*(int (__thiscall **)(int))(*(int *)field44 + 8))(field44);
    } else {
        vc = 0;
    }

    v2c = 0;
    (*(void (__thiscall **)(int, int, int *))(*(int *)a + 4))(a, 1, &v8);

    int esi = sub_6a17c6(v2c, 0, 0x9291fc, 0x938ddc, 0);
    if (esi == 0) {
        sub_802864(0x80ba34);
        sub_6a158c((int)&v8, 0x8d362c);
    }

    int edx = *(int *)sub_56ea60((int)&v8);
    field38(edx + esi);

    v24 = -1;
    if (vc) {
        (*(void (__thiscall **)(int, int))(*(int *)vc))(vc, 1);
    }
}
