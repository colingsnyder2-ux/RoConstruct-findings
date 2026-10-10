// from server: 83% by colin
struct CXTPDockingPaneTabbedContainer
{
    int field_0;
    char pad_4[0x50];
    int field_54;
    char pad_58[0x148];
    int field_1a0;

    int func_6e14a0(int, int);
    int func_6e1f80(int, int, int);
    int func_6e0540();
    int func_630004();
    int func_66ed20();
    int func_66e3d0();
    void func_6e2dd0(int, int, int);
};

extern "C" int __stdcall func_6e0540_helper(int);
extern "C" int __stdcall func_66ed20_helper(int);
extern "C" int __stdcall func_66e3d0_helper(int);

void CXTPDockingPaneTabbedContainer::func_6e2dd0(int a1, int a2, int a3)
{
    int result = func_6e14a0(a2, a3);
    if (result >= 0)
    {
        int* vtbl = *(int**)this;
        int v = func_6e1f80(result, 1, 1);
        typedef int (__thiscall *Fn)(void*, int);
        Fn fn = (Fn)(*(int*)((char*)vtbl + 0x13c));
        fn(this, v);
        int r = func_6e0540_helper((int)((char*)this + 0x54));
        func_66ed20_helper(r);
    }
    if (field_1a0 != 0)
    {
        int* vtbl2 = *(int**)field_1a0;
        typedef int (__thiscall *Fn2)(void*);
        Fn2 fn2 = (Fn2)(*(int*)((char*)vtbl2 + 0x58));
        fn2((void*)field_1a0);
    }
    else
    {
        func_630004();
    }
    int r2 = func_6e0540_helper((int)((char*)this + 0x54));
    func_66e3d0_helper(r2);
    int r3 = func_6e0540_helper((int)((char*)this + 0x54));
    int* vtbl3 = *(int**)r3;
    typedef int (__thiscall *Fn3)(void*, int, int);
    Fn3 fn3 = (Fn3)(*(int*)((char*)vtbl3 + 0x140));
    fn3((void*)r3, 2, (int)((char*)this + 0x54));
}
