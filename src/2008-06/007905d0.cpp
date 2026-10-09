// roc 2008-06 007905d0  unit: PAVCXTShadowWnd::?$CList  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007905d0
//
// 007905d0  56                   push esi
// 007905d1  57                   push edi
// 007905d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007905d6  8bf1                 mov esi, ecx
// 007905d8  56                   push esi
// 007905d9  8bcf                 mov ecx, edi
// 007905db  e810fdffff           call 0x7902f0
// 007905e0  57                   push edi
// 007905e1  8bce                 mov ecx, esi
// 007905e3  e8d8b4fdff           call 0x76bac0
// 007905e8  5f                   pop edi
// 007905e9  5e                   pop esi
// 007905ea  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTShadowWnd@ns_ROCX00000d@@QAEXPAU12@@Z)

namespace ns_ROCX00000d {
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
