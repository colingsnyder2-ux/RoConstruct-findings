// from server: 52% by colin
struct CXTPControlComboBox {
    void method();
};

extern "C" void __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CXTPControlComboBox::method() {
    char buf[4];
    void* p;
    void* q;
    void* r;
    int i;

    p = *(void**)((char*)this + 0x178);
    q = ((void* (__thiscall*)(CXTPControlComboBox*))0x637300)(this);
    if (*(int*)((char*)this + 0x1d0) != 0) goto end;
    if (p == 0) goto end;
    if (*(int*)((char*)p + 0x20) == 0) goto end;
    if (q == 0) goto end;

    ((void (__thiscall*)(CXTPControlComboBox*, void*))0x636be0)(this, buf);

    r = *(void**)q;
    *(int*)((char*)this + 0x1c) = 0;
    sub_77DD98(buf);
    i = ((int (__thiscall*)(void*, int, void*))*(void**)((char*)r + 0x200))(q, 0, buf);
    if (i == -1) {
        r = *(void**)q;
        sub_77DD98(buf);
        i = ((int (__thiscall*)(void*, int, void*))*(void**)((char*)r + 0x1fc))(q, 0, buf);
        ((void (__thiscall*)(void*, int))*(void**)((char*)r + 0x204))(q, i);
        ((void (__thiscall*)(void*, int))*(void**)((char*)r + 0x208))(q, i);
        ((void (__thiscall*)(void*, int))*(void**)((char*)r + 0x208))(q, -1);
    } else {
        ((void (__thiscall*)(void*, int))*(void**)((char*)r + 0x208))(q, i);
    }
    sub_77DDBC(buf);

end:
    return;
}
