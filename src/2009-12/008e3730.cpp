// roc 2009-12 008e3730  unit: PAVCXTShadowWnd::?$CList  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3730
//
// 008e3730  56                   push esi
// 008e3731  57                   push edi
// 008e3732  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008e3736  8bf1                 mov esi, ecx
// 008e3738  56                   push esi
// 008e3739  8bcf                 mov ecx, edi
// 008e373b  e810fdffff           call 0x8e3450
// 008e3740  57                   push edi
// 008e3741  8bce                 mov ecx, esi
// 008e3743  e83804feff           call 0x8c3b80
// 008e3748  5f                   pop edi
// 008e3749  5e                   pop esi
// 008e374a  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTShadowWnd@ns_ROCX0000ed@@QAEXPAU12@@Z)

namespace ns_ROCX0000ed {
struct CXTShadowWnd {
    void sub_712a80(CXTShadowWnd*);
    void sub_6e4770(CXTShadowWnd*);
    void func(CXTShadowWnd*);
};

void CXTShadowWnd::func(CXTShadowWnd* other) {
    other->sub_712a80(this);
    this->sub_6e4770(other);
}
}
