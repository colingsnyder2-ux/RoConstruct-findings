// from server: 24% by colin
extern "C" void* __stdcall malloc(unsigned int size);
extern void G1_func_005d1a80();
extern void G1_func_0048b4e0();

struct G3D_VVector2int16_TypedPropertyDescriptor {
    void construct(void* arg);
};

void G3D_VVector2int16_TypedPropertyDescriptor::construct(void* arg)
{
    void* mem = malloc(0x16c);
    void* obj = 0;
    if (mem) {
        G1_func_005d1a80();
        obj = mem;
    }
    G1_func_0048b4e0();
}
