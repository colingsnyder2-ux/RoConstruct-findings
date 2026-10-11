// from server: 44% by atomic.potato
extern "C" void* __cdecl sub_98211a(unsigned int size);

struct S {
    void* field0;
    S* f(unsigned int a, unsigned int b);
};

S* S::f(unsigned int a, unsigned int b) {
    S* result = 0;
    void* mem = sub_98211a(0x14);
    if (mem) {
        *(unsigned int*)((char*)mem + 4) = 1;
        *(unsigned int*)((char*)mem + 8) = 1;
        *(unsigned int*)((char*)mem) = 0xbafc08;
        *(unsigned int*)((char*)mem + 0xc) = a;
        result = (S*)mem;
    } else {
        result = 0;
    }
    this->field0 = result;
    return this;
}
