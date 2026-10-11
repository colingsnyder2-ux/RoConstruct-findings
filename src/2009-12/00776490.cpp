// from server: 44% by atomic.potato
struct S_func_00776490 {
    void* f(int a, int b);
};

extern "C" void* __cdecl sub_007F3860(unsigned int size);

void* S_func_00776490::f(int a, int b)
{
    void* p = sub_007F3860(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x9e9008;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    *(void**)this = p;
    return this;
}
