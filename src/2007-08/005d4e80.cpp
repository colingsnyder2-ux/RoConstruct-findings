// from server: 46% by colin
struct S {
    void* p;
    S* construct(void* arg);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);

S* S::construct(void* arg)
{
    S* result = 0;
    void* mem = sub_62FEF6(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x7bb7a4;
        *(void**)((char*)mem + 0xc) = arg;
        result = (S*)mem;
    }
    this->p = result;
    return this;
}
