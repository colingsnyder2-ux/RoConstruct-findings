// from server: 43% by atomic.potato
struct SurfaceEnumPropDescriptor {
    void* vfptr;
    char pad[0x14];
    void* field18;
    void* field1c;
    void* construct(int, int, int, int, int);
};

extern "C" void __cdecl sub_557330(int, int);
extern "C" void* __cdecl sub_5ed5c0();
extern "C" void __cdecl sub_59c7f0();
extern "C" void* __cdecl sub_6a0920(int);
extern "C" void __cdecl sub_56c650();

void* SurfaceEnumPropDescriptor::construct(int a, int b, int c, int d, int e)
{
    sub_557330(0x5ed620, 0x97b11c);
    void* p = sub_5ed5c0();
    field18 = p;
    sub_59c7f0();
    sub_56c650();
    field18 = p;
    vfptr = (void*)0x840104;
    void* q = sub_6a0920(0xc);
    if (q) {
        *(int*)q = 0x83fdc8;
        *(int*)((char*)q + 4) = c;
        *(int*)((char*)q + 8) = d;
    } else {
        q = 0;
    }
    field1c = q;

    return this;
}
