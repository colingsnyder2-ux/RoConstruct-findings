// from server: 52% by colin
struct S {
    void* p;
    S* ctor(void*);
};

extern "C" void* __cdecl func_006a0920(unsigned int);

S* S::ctor(void* a)
{
    p = 0;
    void* q = func_006a0920(0x10);
    if (q != 0) {
        *(int*)((char*)q + 4) = 1;
        *(int*)((char*)q + 8) = 1;
        *(int*)q = 0x84088c;
        *(void**)((char*)q + 0xc) = a;
    } else {
        q = 0;
    }
    p = q;
    return this;
}
