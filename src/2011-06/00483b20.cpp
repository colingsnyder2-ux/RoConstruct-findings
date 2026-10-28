// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_80A05E(unsigned int);

struct VLocalBackpackTool {
    void* field0;
    void* FactoryProduct(unsigned int, unsigned int);
};

void* VLocalBackpackTool::FactoryProduct(unsigned int a, unsigned int b)
{
    void* p = sub_80A05E(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xa7269c;
        *(unsigned int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
