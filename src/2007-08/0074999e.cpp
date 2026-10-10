// from server: 66% by colin
extern "C" void __cdecl sub_630a1e(void*);
extern "C" void __cdecl sub_630a18(void*);

struct S {
    void f(void* a, void* b);
};

void S::f(void* a, void* b)
{
    int* p = (int*)b;
    int v = *(int*)((char*)p - 4);
    v ^= (int)p;
    sub_630a1e((void*)v);
    sub_630a18((void*)0x8503b0);
}
