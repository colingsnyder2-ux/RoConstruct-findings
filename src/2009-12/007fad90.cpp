// from server: 84% by atomic.potato
struct CXTPControlComboBoxPopupBar
{
    void* f(void*);
};

extern "C" void* __cdecl CXTPControlComboBoxPopupBar_f_007fad20(CXTPControlComboBoxPopupBar*);
typedef void (__thiscall *FunctionType)(void*, void*);

void* CXTPControlComboBoxPopupBar::f(void* argument)
{
    void* p = CXTPControlComboBoxPopupBar_f_007fad20(this);
    void* vtable = *(void**)p;
    FunctionType function = *(FunctionType*)((char*)vtable + 0x1dc);
    function(p, argument);
    return p;
}
