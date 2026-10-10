// from server: 37% by colin
// roc 2007-08 00635d30  unit: CXTPControlComboBox  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635d30

extern "C" void __stdcall sub_77ddbc();

struct CXTPControlComboBox
{
    void dtor();
};

void CXTPControlComboBox::dtor()
{
    *(int*)((char*)this + 0) = 0x7c558c;
    *(int*)((char*)this + 0x20) = 0x7c552c;

    int* p1 = *(int**)((char*)this + 0x178);
    if (p1)
    {
        (*(void(__thiscall**)(int*, int))(*p1 + 4))(p1, 1);
    }

    int* p2 = *(int**)((char*)this + 0x1c4);
    if (p2)
    {
        (*(void(__thiscall**)(int*, int))(*p2))(p2, 1);
        *(int*)((char*)this + 0x1c4) = 0;
    }

    sub_77ddbc();
    sub_77ddbc();
    sub_77ddbc();

    ((void(__thiscall*)(CXTPControlComboBox*))0x670590)(this);
}
