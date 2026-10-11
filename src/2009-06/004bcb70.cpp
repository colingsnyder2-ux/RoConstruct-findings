// from server: 44% by atomic.potato
extern "C" void* __cdecl sub_718A38(unsigned int);

struct S {
    void* field0;
    void* f(unsigned int, unsigned int);
};

void* S::f(unsigned int a, unsigned int b) {
    void* p = sub_718A38(0x14);
    if (p) {
        *(unsigned int*)((char*)p + 4) = 1;
        *(unsigned int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x8c493c;
        *(unsigned int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
