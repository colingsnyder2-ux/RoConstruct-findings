// from server: 82% by colin
struct S_func_00564860 {
    void* m_vtbl;
    int f(int);
};

extern "C" int __stdcall sub_0053F8D0(int);

int S_func_00564860::f(int a)
{
    int (__thiscall *fn)(S_func_00564860*, int);
    fn = *(int (__thiscall **)(S_func_00564860*, int))m_vtbl;
    return fn(this, sub_0053F8D0(a));
}
