// roc 2009-06 006f5c60  unit: RBX::AssemblyStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f5c60
//
// 006f5c60  56                   push esi
// 006f5c61  57                   push edi
// 006f5c62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f5c66  8bf1                 mov esi, ecx
// 006f5c68  56                   push esi
// 006f5c69  8bcf                 mov ecx, edi
// 006f5c6b  e80000feff           call 0x6d5c70
// 006f5c70  57                   push edi
// 006f5c71  8bce                 mov ecx, esi
// 006f5c73  e858ffffff           call 0x6f5bd0
// 006f5c78  5f                   pop edi
// 006f5c79  5e                   pop esi
// 006f5c7a  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTShadowWnd@ns_ROCX000062@@QAEXPAU12@@Z)

namespace ns_ROCX000062 {
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
