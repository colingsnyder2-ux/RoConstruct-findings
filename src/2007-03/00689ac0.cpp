// roc 2007-03 00689ac0  unit: seg_00680000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00689ac0
//
// 00689ac0  83b96401000000       cmp dword ptr [ecx + 0x164], 0
// 00689ac7  7409                 je 0x689ad2
// 00689ac9  8b01                 mov eax, dword ptr [ecx]
// 00689acb  8b5004               mov edx, dword ptr [eax + 4]
// 00689ace  6a01                 push 1
// 00689ad0  ffd2                 call edx
// 00689ad2  c3                   ret 
// copied from an identical function in another client (function ?OnInplaceButtonDown@CXTPPropertyGridItemColor@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
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
}
