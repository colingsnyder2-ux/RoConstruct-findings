// from server: 52% by colin
struct FactoryProduct {
    void* ptr;
    FactoryProduct(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

FactoryProduct::FactoryProduct(int a, int b)
{
    ptr = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x838930;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    ptr = p;
}
