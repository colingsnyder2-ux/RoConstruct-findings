// from server: 66% by colin
struct S {
    void f(int a, void* b);
};

extern "C" void __cdecl sub_630a1e(void* p);
extern "C" void __cdecl sub_630a18(void* p);

void S::f(int a, void* b)
{
    char* p = (char*)b;
    int v = *(int*)(p - 4);
    v ^= (int)p;
    sub_630a1e((void*)v);
    sub_630a18((void*)0x849c40);
}
