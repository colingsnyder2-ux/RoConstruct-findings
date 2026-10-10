// from server: 79% by colin
struct CXTPRibbonBar {
    char pad0[4];
    int m_nHeight;
    int sub_6a7a50();
    void sub_6a7c30(int);
};

extern "C" int __stdcall sub_643980();
extern "C" int __stdcall sub_633c70(int);

void CXTPRibbonBar::sub_6a7c30(int arg)
{
    CXTPRibbonBar* pThis = (CXTPRibbonBar*)((char*)this - 0x1c4);
    if (pThis->sub_6a7a50() == 0)
        return;
    int v = sub_633c70(sub_643980());
    pThis->sub_6a7a50();
    int eax = *(int*)(v + 0x84);
    eax = *(int*)(eax + 0x38);
    if (arg != 0) {
        eax -= 0x28;
        if (eax < 0)
            eax = 0;
    } else {
        eax += 0x28;
    }
    if (eax == this->m_nHeight)
        return;
    int* vtbl = *(int**)pThis;
    this->m_nHeight = eax;
    typedef void (__thiscall *Fn)(void*);
    ((Fn)(*(int*)((char*)vtbl + 0x17c)))(pThis);
}
