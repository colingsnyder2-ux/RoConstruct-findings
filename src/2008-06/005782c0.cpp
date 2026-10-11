// from server: 53% by colin
struct FactoryProduct {
    void* field0;
    FactoryProduct(void* arg0, void* arg1);
};

void* __cdecl sub_6A0920(unsigned int size);

FactoryProduct::FactoryProduct(void* arg0, void* arg1) {
    field0 = 0;
    void* p = sub_6A0920(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x830028;
        *(void**)((char*)p + 0xc) = arg0;
    } else {
        p = 0;
    }
    field0 = p;
}
