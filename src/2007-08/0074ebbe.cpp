// from server: 69% by tester
extern "C" void __cdecl sub_630A1E(void*);
extern "C" void __cdecl sub_630A18(void*);

struct S {
};

void __cdecl f(int, void* p)
{
    unsigned char* q = (unsigned char*)p;
    unsigned int v = *(unsigned int*)(q - 4);
    v ^= (unsigned int)q;
    sub_630A1E((void*)v);
    sub_630A18((void*)0x8559c4);
}
