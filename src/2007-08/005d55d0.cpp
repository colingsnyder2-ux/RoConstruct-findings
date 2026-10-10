// from server: 52% by tester
struct S {
    void* p;
    void* f(void* a, void* b);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void* S::f(void* a, void* b) {
    void* mem;
    this->p = 0;
    mem = sub_62FEF6(0x14);
    if (mem != 0) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(int*)mem = 0x7bb894;
        *(void**)((char*)mem + 0xc) = a;
    } else {
        mem = 0;
    }
    this->p = mem;
    return this;
}
