// from server: 66% by colin
extern "C" void __cdecl helper_00630a1e(void*);
extern "C" void __cdecl helper_00630a18(void*);

struct S {
    void f(int, void*);
};

void S::f(int, void* p)
{
    unsigned char* q = (unsigned char*)p;
    unsigned int v = *(unsigned int*)(q - 4);
    v ^= (unsigned int)q;
    helper_00630a1e((void*)v);
    helper_00630a18((void*)0x845640);
}
