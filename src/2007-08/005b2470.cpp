// from server: 48% by colin
struct S_005b2470
{
    char pad[0xec];
    S_005b2470* ctor(void*);
};

struct S_006091c0
{
    void method();
};

struct S_005b1db0
{
    void method(void*);
};

extern void* __cdecl G2_func_0062fef6(unsigned int);

S_005b2470* S_005b2470::ctor(void* arg)
{
    void* p = G2_func_0062fef6(0xc4);
    if (p != 0)
    {
        ((S_006091c0*)p)->method();
    }
    else
    {
        p = 0;
    }
    ((S_005b1db0*)this)->method(p);
    *(int*)((char*)this + 0x00) = 0x7b7b0c;
    *(int*)((char*)this + 0x04) = 0x7b7b04;
    *(int*)((char*)this + 0x10) = 0x7b7afc;
    *(int*)((char*)this + 0x14) = 0x7b7aec;
    *(int*)((char*)this + 0x2c) = 0x7b7adc;
    *(int*)((char*)this + 0x44) = 0x7b7acc;
    *(int*)((char*)this + 0x5c) = 0x7b7abc;
    *(int*)((char*)this + 0x74) = 0x7b7aac;
    *(int*)((char*)this + 0x8c) = 0x7b7a9c;
    *(int*)((char*)this + 0xe8) = 0x7b7a84;
    return this;
}
