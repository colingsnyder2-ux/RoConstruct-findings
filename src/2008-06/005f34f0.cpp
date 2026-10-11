// from server: 52% by colin
extern "C" void* __cdecl func_006a0920(unsigned int size);

struct S
{
    void* member_0;
    S* init(void* arg);
};

S* S::init(void* arg)
{
    member_0 = 0;
    void* p = func_006a0920(0x10);
    if (p != 0)
    {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)((char*)p + 0) = (void*)0x8408b4;
        *(void**)((char*)p + 0xc) = arg;
    }
    else
    {
        p = 0;
    }
    member_0 = p;
    return this;
}
