// from server: 69% by colin
extern "C" void __cdecl sub_00630a1e(void*);
extern "C" void __cdecl sub_00630a18(void*);

struct S {
    void __cdecl f(void*);
};

void S::f(void* p)
{
    unsigned int v = *(unsigned int*)((char*)p - 4);
    sub_00630a1e((void*)(v ^ (unsigned int)p));
    sub_00630a18((void*)0x8514ec);
}
