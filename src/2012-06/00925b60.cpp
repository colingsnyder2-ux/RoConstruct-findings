// roc 2012-06 00925b60  unit: RBX::SleepStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00925b60
//
// 00925b60  56                   push esi
// 00925b61  57                   push edi
// 00925b62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00925b66  8bf1                 mov esi, ecx
// 00925b68  56                   push esi
// 00925b69  8bcf                 mov ecx, edi
// 00925b6b  e8c018ffff           call 0x917430
// 00925b70  57                   push edi
// 00925b71  8bce                 mov ecx, esi
// 00925b73  e8b8d80300           call 0x963430
// 00925b78  5f                   pop edi
// 00925b79  5e                   pop esi
// 00925b7a  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTShadowWnd@ns_ROCX000063@@QAEXPAU12@@Z)

namespace ns_ROCX000063 {
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
