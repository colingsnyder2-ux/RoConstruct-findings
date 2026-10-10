// from server: 90% by tester
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
        int r = ((CXTPDockingPaneTabbedContainer*)((char*)this + 0x54))->func_6e0540();
        ((CXTPDockingPaneTabbedContainer*)r)->func_66ed20();
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
    int r2 = ((CXTPDockingPaneTabbedContainer*)((char*)this + 0x54))->func_6e0540();
    ((CXTPDockingPaneTabbedContainer*)r2)->func_66e3d0();
    int r3 = ((CXTPDockingPaneTabbedContainer*)((char*)this + 0x54))->func_6e0540();
    int* vtbl3 = *(int**)r3;
    typedef int (__thiscall *Fn3)(void*, int, int);
    Fn3 fn3 = (Fn3)(*(int*)((char*)vtbl3 + 0x140));
    fn3((void*)r3, 2, (int)((char*)this + 0x54));
}
