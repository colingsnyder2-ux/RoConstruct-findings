// from server: 51% by colin
struct SurfaceEnumPropDescriptor {
    char pad[0x18];
    int field18;
    int field1c;
    int init(int, int, int, int, int);
};

extern "C" void __cdecl sub_557330(int, int);
extern "C" int __cdecl sub_5ed5c0();
extern "C" int __cdecl sub_59c7f0();
extern "C" int __cdecl sub_56c650(int, int, int, int, int);
extern "C" void* __cdecl sub_6a0920(unsigned int);

int SurfaceEnumPropDescriptor::init(int a1, int a2, int a3, int a4, int a5)
{
    sub_557330(0x97b11c, 0x5ed620);
    int v = sub_5ed5c0();
    int w = sub_59c7f0();
    sub_56c650(w, v, a1, a2, a3);
    field18 = v;
    *(int*)this = 0x8401d4;
    void* p = sub_6a0920(0xc);
    if (p) {
        *(int*)p = 0x83fe04;
        *(int*)((char*)p + 4) = a4;
        *(int*)((char*)p + 8) = a5;
    } else {
        p = 0;
    }
    field1c = (int)p;
    return (int)this;
}
