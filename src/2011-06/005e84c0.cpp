// from server: 52% by atomic.potato
struct S {
    void* field0;
    S* f(void* a, void* b);
};

extern "C" void* __cdecl sub_80a05e(unsigned int size);

S* S::f(void* a, void* b)
{
    field0 = 0;
    void* p = sub_80a05e(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xa91040;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
