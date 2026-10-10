// from server: 64% by colin
struct S_func_00741e7e
{
    void f();
};

extern "C" void __cdecl helper_00630a1e(int);
extern "C" void __cdecl helper_00630a18();

void S_func_00741e7e::f()
{
    int* p = *(int**)((char*)0 + 8);
    int v = *(int*)((char*)p - 4);
    helper_00630a1e(v ^ (int)p);
    helper_00630a18();
}
