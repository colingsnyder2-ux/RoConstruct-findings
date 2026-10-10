// from server: 69% by colin
extern "C" void __cdecl sub_00630a1e(void*);
extern "C" void __cdecl sub_00630a18(void*);

struct S_0074895e {
    void __cdecl f(char* a);
};

void S_0074895e::f(char* a)
{
    int v;
    v = *(int*)(a - 4);
    v ^= (int)a;
    sub_00630a1e((void*)v);
    sub_00630a18((void*)0x84f1b4);
}
