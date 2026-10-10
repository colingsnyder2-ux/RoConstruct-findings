// from server: 62% by colin
struct S {
    void f(int a, void* b);
};

extern "C" void __fastcall sub_630a1e(void* p);
extern "C" void __cdecl sub_630a18(void* p);

void S::f(int a, void* b)
{
    unsigned char* p = (unsigned char*)b;
    unsigned int v = *(unsigned int*)(p - 4);
    v ^= (unsigned int)p;
    sub_630a1e((void*)v);
    sub_630a18((void*)0x84d1ac);
}
