// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_98211a(unsigned int size);

struct FactoryProductCreator {
    void* field0;
    void* __thiscall create(unsigned int a, unsigned int b);
};

void* __thiscall FactoryProductCreator::create(unsigned int a, unsigned int b)
{
    void* p;
    this->field0 = 0;
    p = sub_98211a(0x14);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0xbafccc;
        *(unsigned int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
