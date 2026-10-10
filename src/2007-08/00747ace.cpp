// from server: 69% by tester
struct S_func_00747ace {
};

extern "C" void __cdecl sub_00630a1e(int);
extern "C" void __cdecl sub_00630a18();

void __cdecl f(int a1, int a2)
{
    int* p = (int*)a2;
    int v = p[-1] ^ (int)p;
    sub_00630a1e(v);
    sub_00630a18();
}
