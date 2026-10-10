// from server: 52% by colin
struct ICreator {
    void* vftable;
};

struct FactoryProduct {
    ICreator* creator;
    FactoryProduct(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

FactoryProduct::FactoryProduct(int a, int b)
{
    creator = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7a95b0;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    creator = (ICreator*)p;
}
