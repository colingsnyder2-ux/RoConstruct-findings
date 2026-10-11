// from server: 44% by atomic.potato
extern "C" void* __cdecl sub_98211A(unsigned int);

struct S {
    void* f(int, int);
};

void* S::f(int a, int b)
{
    void* p = sub_98211A(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0xba3ba0;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    *(void**)this = p;
    return this;
}
