// from server: 52% by colin
struct FactoryProduct {
    void* field0;
    void* construct(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* FactoryProduct::construct(int a, int b)
{
    void* p;
    field0 = 0;
    p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x7af798;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
