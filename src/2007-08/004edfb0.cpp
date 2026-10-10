// from server: 54% by colin
struct HeadBuilder {
    char pad[0x20];
    float field_20;
    int field_24;
    void method(int);
};

extern void __cdecl func_004ed2a0(int, int, int, int);

void HeadBuilder::method(int a)
{
    int v = field_24 + 1;
    float f = field_20;
    int half = (v - (v >> 31)) >> 1;
    short s = (short)field_24;
    int packed;
    *(short*)&packed = s;
    *(short*)((char*)&packed + 2) = s;
    func_004ed2a0(a, half, *(int*)&f, packed);
}
