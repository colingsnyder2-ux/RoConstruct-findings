// from server: 65% by tester
struct S {
};

extern "C" void __fastcall sub_630a1e(void* p);
extern "C" void __cdecl sub_630a18(void* p);

void __cdecl f(int a, void* b)
{
    unsigned char* p = (unsigned char*)b;
    unsigned int v = *(unsigned int*)(p - 4);
    v ^= (unsigned int)p;
    sub_630a1e((void*)v);
    sub_630a18((void*)0x84d1ac);
}
