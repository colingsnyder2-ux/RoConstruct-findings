// from server: 42% by colin
struct Name {
    Name();
    Name(const Name&);
    ~Name();
};

struct VFlagStand {
    char pad[0xbc];
    int field_bc;
    char pad2[0xec - 0xbc - 4];
    int field_ec;

    int FactoryProduct(int arg);
};

extern "C" int __stdcall sub_5e9a30();
extern "C" int __stdcall sub_541630(int);
extern "C" int __stdcall sub_5d1df0();
extern "C" int __stdcall sub_475050(int);
extern "C" int __stdcall sub_577de0(int);
extern "C" int __stdcall sub_5bae60(int);
extern "C" int __stdcall sub_573d80();

extern float g_797e9c;

int VFlagStand::FactoryProduct(int arg)
{
    if (sub_5e9a30() == 0) {
        sub_541630(field_bc);
        int esi = sub_5d1df0();
        Name n;
        sub_475050(0);
        sub_577de0(0);
        int ecx = field_ec;
        int edx = *(int*)(ecx + 8);
        int eax = *(int*)(edx + (int)this + 0xec);
        eax = *(int*)eax;
        int* p = (int*)(edx + (int)this + 0xec);
        sub_5bae60(0);
        sub_573d80();
    }
    return 0;
}
