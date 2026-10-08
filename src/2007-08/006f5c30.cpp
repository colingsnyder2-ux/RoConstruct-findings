// from server: 100% by colin
// roc 2007-08 006f5c30  unit: CXTPPropertyGridInplaceButton  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5c30
//
// 006f5c30  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006f5c33  33d2                 xor edx, edx
// 006f5c35  398858010000         cmp dword ptr [eax + 0x158], ecx
// 006f5c3b  0f94c2               sete dl
// 006f5c3e  8bc2                 mov eax, edx
// 006f5c40  c3                   ret 

struct CXTPPropertyGridInplaceButton {
    char pad[0x28];
    void* m_pItem;
    int IsSelected() const;
};

int CXTPPropertyGridInplaceButton::IsSelected() const {
    return *(CXTPPropertyGridInplaceButton**)((char*)m_pItem + 0x158) == this;
}
