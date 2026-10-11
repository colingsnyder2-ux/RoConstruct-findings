// from server: 52% by atomic.potato
struct S {
    void* p;
    S(void* a, void* b);
};

extern "C" void* __cdecl sub_6a0920(unsigned int size);

S::S(void* a, void* b)
{
    p = 0;
    void* mem = sub_6a0920(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x822cc4;
        *(void**)((char*)mem + 0xc) = a;
    } else {
        mem = 0;
    }
    p = mem;
}
