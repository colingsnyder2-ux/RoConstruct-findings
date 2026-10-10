// from server: 71% by colin
struct CXTPControlComboBox
{
    void func_00636470(int, int, int);
};

extern "C" void* __stdcall func_77dcc8(int, int);
extern "C" void* __stdcall func_77dd98(int, void*);

void CXTPControlComboBox::func_00636470(int a1, int a2, int a3)
{
    void (__thiscall *fn)(void*, void*) = *(void (__thiscall **)(void*, void*))(*((int*)this) + 0x70);
    void* r1 = func_77dcc8(a1, a3);
    void* r2 = func_77dd98(a1, r1);
    fn(this, r2);
}
