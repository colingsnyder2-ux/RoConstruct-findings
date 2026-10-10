// from server: 40% by colin
struct CComboBox {
    void sub_6305DA();
    void sub_69E7A0();
    void sub_69ED50(const char*, int);
    void* f();
};

void* CComboBox::f()
{
    sub_6305DA();
    *(void**)((char*)this + 0x54) = 0;
    *(void**)this = (void*)0x7cc914;
    sub_69E7A0();
    sub_69ED50((const char*)0x7c652c, 0);
    return this;
}
