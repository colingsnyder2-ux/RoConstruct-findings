// from server: 84% by colin
struct S_func_005b6e20 {
    char pad0[8];
    int m_vtable;
    void f(int a1, int a2);
};

extern "C" int __cdecl sub_00573890(int);

void S_func_005b6e20::f(int a1, int a2)
{
    int v;
    if (a1 != 0)
        v = a1 - 4;
    else
        v = 0;
    int r = sub_00573890(v);
    int fn = m_vtable;
    float fv = *(float*)a2;
    ((void (__thiscall *)(int, float))fn)(r, fv);
}
