// from server: 71% by colin
extern "C" void __cdecl sub_630A1E(void*);
extern "C" void __cdecl sub_630A18(void*);

struct S {
    void f();
};

void S::f()
{
    char* p;
    p = *(char**)((char*)&p + 8);
    int v = *(int*)(p - 4);
    v ^= (int)p;
    sub_630A1E((void*)v);
    sub_630A18((void*)0x86fcd4);
}
