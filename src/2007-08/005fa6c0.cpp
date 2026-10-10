// from server: 33% by colin
struct RBXName {
    void* p;
    void* q;
};

struct FactoryProduct {
    void* field0;
    void* field4;
    char pad8[0x18];
    void construct(RBXName* name);
    FactoryProduct(RBXName* name);
};

extern "C" void __cdecl sub_5fa600(void* self, void* arg);
extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void __cdecl sub_4181b0(void* self, void* arg);
extern "C" void __cdecl sub_728830(void* self);

FactoryProduct::FactoryProduct(RBXName* name)
{
    this->field0 = 0;
    this->field4 = 0;
    sub_5fa600(this, name);
    void* mem = sub_62fef6(0x20);
    if (mem != 0) {
        *(void**)((char*)mem + 4) = 0;
        *(void**)((char*)mem + 8) = 0;
        *(void**)((char*)mem + 0xc) = 0;
        *(void**)((char*)mem + 0x14) = 0;
        *(void**)((char*)mem + 0x18) = 0;
        *(char*)((char*)mem + 0x1c) = 0;
    } else {
        mem = 0;
    }
    sub_4181b0(this, mem);
    sub_728830(this);
}
