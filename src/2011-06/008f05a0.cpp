// roc 2011-06 008f05a0  unit: PAVCXTShadowWnd::?$CList  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f05a0
//
// 008f05a0  56                   push esi
// 008f05a1  57                   push edi
// 008f05a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f05a6  8bf1                 mov esi, ecx
// 008f05a8  56                   push esi
// 008f05a9  8bcf                 mov ecx, edi
// 008f05ab  e870fcffff           call 0x8f0220
// 008f05b0  57                   push edi
// 008f05b1  8bce                 mov ecx, esi
// 008f05b3  e8b8ffffff           call 0x8f0570
// 008f05b8  5f                   pop edi
// 008f05b9  5e                   pop esi
// 008f05ba  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTShadowWnd@ns_ROCX00003e@@QAEXPAU12@@Z)

namespace ns_ROCX00003e {
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
