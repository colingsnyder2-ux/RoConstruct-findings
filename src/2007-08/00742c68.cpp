// from server: 69% by tester
struct S {
};

extern "C" void __cdecl sub_630a1e(void* p);
extern "C" void __cdecl sub_630a18(void* p);

void __cdecl f(int a, void* b)
{
    char* p = (char*)b;
    int v = *(int*)(p - 4);
    v ^= (int)p;
    sub_630a1e((void*)v);
    sub_630a18((void*)0x849c40);
}
