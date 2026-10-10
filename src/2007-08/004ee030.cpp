// from server: 60% by colin
struct HeadBuilder {
    char pad[0x20];
    float field_20;
    int field_24;
    void func(int);
};

extern "C" void __cdecl sub_4ed8f0(int, int, int, int);

void HeadBuilder::func(int arg)
{
    int v = field_24;
    float f = field_20;
    int a = v + 1;
    a = (a - (a >> 31)) >> 1;
    short s = (short)v;
    int packed;
    *(short*)&packed = s;
    *(short*)((char*)&packed + 2) = s;
    sub_4ed8f0(arg, a, *(int*)&f, packed);
}
