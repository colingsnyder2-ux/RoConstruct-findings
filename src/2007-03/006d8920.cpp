// roc 2007-03 006d8920  unit: seg_006d0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d8920
//
// 006d8920  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006d8923  33d2                 xor edx, edx
// 006d8925  398858010000         cmp dword ptr [eax + 0x158], ecx
// 006d892b  0f94c2               sete dl
// 006d892e  8bc2                 mov eax, edx
// 006d8930  c3                   ret 
// copied from an identical function in another client (function ?IsSelected@CXTPPropertyGridInplaceButton@ns_ROCX000062@@QBEHXZ)

namespace ns_ROCX000062 {
struct CXTPPropertyGridInplaceButton {
    char pad[0x28];
    void* m_pItem;
    int IsSelected() const;
};

int CXTPPropertyGridInplaceButton::IsSelected() const {
    return *(CXTPPropertyGridInplaceButton**)((char*)m_pItem + 0x158) == this;
}
}
