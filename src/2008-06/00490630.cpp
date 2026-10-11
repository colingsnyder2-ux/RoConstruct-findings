// from server: 50% by colin
struct FactoryProduct {
    void* field0;
    FactoryProduct(int arg0, int arg1);
};

extern "C" void* __cdecl sub_6A0920(unsigned int size);

void* g_vtable = (void*)0x821b38;

FactoryProduct::FactoryProduct(int arg0, int arg1)
{
    field0 = 0;
    void* p = sub_6A0920(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = g_vtable;
        *(int*)((char*)p + 0xc) = arg0;
    } else {
        p = 0;
    }
    field0 = p;
}
