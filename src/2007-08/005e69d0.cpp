// from server: 52% by colin
struct Name {
    void* p;
    Name();
};

struct Creator {
    void* vfptr;
    void* f4;
    void* f8;
    void* fC;
    void* f10;
    void* f14;
    void* f18;
    char f1C;
    Creator();
};

struct FactoryProduct {
    void* f0;
    void* f4;
    char pad8[0x18];
    FactoryProduct(const void* arg);
};

extern "C" void __cdecl sub_5E6780(void* dst, const void* src);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __stdcall sub_4181B0(void* p);
extern "C" void __stdcall sub_728830(void* p);

FactoryProduct::FactoryProduct(const void* arg)
{
    f0 = 0;
    f4 = 0;
    const unsigned char* a = (const unsigned char*)arg;
    unsigned int v0 = *(unsigned int*)(a + 0);
    unsigned int v4 = *(unsigned int*)(a + 4);
    unsigned int v8 = *(unsigned int*)(a + 8);
    unsigned int vC = *(unsigned int*)(a + 0xC);
    unsigned int v10 = *(unsigned int*)(a + 0x10);
    unsigned int v14 = *(unsigned int*)(a + 0x14);
    unsigned char tmp[0x18];
    *(unsigned int*)(tmp + 0) = v0;
    *(unsigned int*)(tmp + 4) = v4;
    *(unsigned int*)(tmp + 8) = v8;
    *(unsigned int*)(tmp + 0xC) = vC;
    *(unsigned int*)(tmp + 0x10) = v10;
    *(unsigned int*)(tmp + 0x14) = v14;
    sub_5E6780((char*)this + 8, tmp);
    Creator* c = (Creator*)sub_62FEF6(0x20);
    if (c != 0) {
        c->f4 = 0;
        c->f8 = 0;
        c->fC = 0;
        c->f14 = 0;
        c->f18 = 0;
        c->f1C = 0;
    } else {
        c = 0;
    }
    sub_4181B0(c);
    sub_728830(this);
}
