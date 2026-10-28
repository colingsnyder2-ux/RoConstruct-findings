// from server: 0% by atomic.potato
struct S {
    void* field0;
    void* f(void* a, void* b);
};

extern "C" void* __cdecl sub_7a79a0(unsigned int size);

void* S::f(void* a, void* b)
{
    void* p = sub_7a79a0(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xa4c150;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
