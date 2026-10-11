// from server: 47% by atomic.potato
extern "C" void* __cdecl sub_718A38(unsigned int);

struct S {
    void* field0;
    S* f(unsigned int a, unsigned int b);
};

S* S::f(unsigned int a, unsigned int b) {
    S* result = 0;
    void* mem = sub_718A38(0x14);
    if (mem) {
        *(unsigned int*)((char*)mem + 4) = 1;
        *(unsigned int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x8d5fe4;
        *(unsigned int*)((char*)mem + 0xc) = a;
        result = (S*)mem;
    }
    this->field0 = result;
    return this;
}
