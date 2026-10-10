// from server: 52% by colin
// roc 2007-08 00639100 176 bytes
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /MD

extern "C" {
    int __stdcall sub_637300();
    void __stdcall sub_77ddb8(const char*);
    void __stdcall sub_77ddac();
    void __stdcall sub_77dd74(void*);
    void __stdcall sub_77ddbc();
}

struct CPatchedControlComboBox {
    int func(int);
};

int CPatchedControlComboBox::func(int arg) {
    int result = 0;
    int* p = (int*)sub_637300();
    if (p == 0) {
        sub_77ddb8("list<T> too long");
        return (int)this;
    }
    int v = ((int (__thiscall*)(void*))((*(int**)p)[0x1f8/4]))(p);
    sub_77ddac();
    if (v >= 0) {
        ((void (__thiscall*)(void*, int, void*))((*(int**)p)[0x20c/4]))(p, v, &result);
    }
    sub_77dd74(&result);
    sub_77ddbc();
    return (int)this;
}
