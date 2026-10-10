// from server: 65% by colin
struct S_func_00747ace {
    void f(int a1, int a2);
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void S_func_00747ace::f(int a1, int a2)
{
    int* p = (int*)a2;
    int v = p[-1] ^ (int)p;
    sub_00630a1e(v);
    sub_00630a18();
}
