// from server: 70% by Intel
struct CProgressDialog {
    virtual void func();
};

void CProgressDialog::func() {
    int (__thiscall *vtable_func)(CProgressDialog*, int);
    vtable_func = (int (__thiscall *)(CProgressDialog*, int))(*(int**)this)[1];
    vtable_func(this, 0);
}
