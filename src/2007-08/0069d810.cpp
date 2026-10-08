// from server: 100% by colin
// roc 2007-08 0069d810  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069d810
//
// 0069d810  83b96401000000       cmp dword ptr [ecx + 0x164], 0
// 0069d817  7409                 je 0x69d822
// 0069d819  8b01                 mov eax, dword ptr [ecx]
// 0069d81b  8b5004               mov edx, dword ptr [eax + 4]
// 0069d81e  6a01                 push 1
// 0069d820  ffd2                 call edx
// 0069d822  c3                   ret 

struct CXTPPropertyGridItemColor {
    virtual void vf0();
    virtual void vf1(int);
    char pad_0x004[0x160];
    int m_nField_0x164;
    void OnInplaceButtonDown();
};

void CXTPPropertyGridItemColor::OnInplaceButtonDown()
{
    if (m_nField_0x164 != 0)
        vf1(1);
}
