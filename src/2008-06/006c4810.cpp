// from server: 35% by colin
// roc 2008-06 006c4810  unit: CXTPToolBar  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4810

struct CXTPToolBar {
    int field_0x3c;
    int Invoke(int, int, int, int, int, int);
    int GetSomething(int*);
};

extern "C" int __cdecl sub_6a0926(int*);
extern "C" int __cdecl sub_6a0e36(int);
extern "C" void __cdecl sub_6a0944();
extern "C" void __cdecl sub_6c48e6();

int CXTPToolBar::Invoke(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int local_20 = 0;
    int local_28;
    int result;
    int (*fn)(int, int, int, int, int, int);

    int* p = (int*)sub_6a0926(&local_20);
    int v = sub_6a0e36(p[0x9c / 4]);
    if (v == 0)
        return 0;

    this->GetSomething(&local_28);

    fn = (int (*)(int, int, int, int, int, int))this->field_0x3c;
    if (fn == 0)
        sub_6a0944();

    result = fn(a1, a2, a3, a4, a5, a6);
    sub_6c48e6();
    return result;
}
