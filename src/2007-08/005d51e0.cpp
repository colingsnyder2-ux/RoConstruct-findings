// from server: 52% by colin
struct S {
    void* p;
    S(void* a, void* b);
};

extern "C" void* __cdecl sub_62fef6(unsigned int);

S::S(void* a, void* b)
{
    p = 0;
    void* mem = sub_62fef6(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x7bb81c;
        *(void**)((char*)mem + 0xc) = a;
    } else {
        mem = 0;
    }
    p = mem;
}
