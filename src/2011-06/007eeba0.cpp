// roc 2011-06 007eeba0  unit: RBX::AssemblyStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eeba0
//
// 007eeba0  56                   push esi
// 007eeba1  57                   push edi
// 007eeba2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007eeba6  8bf1                 mov esi, ecx
// 007eeba8  56                   push esi
// 007eeba9  8bcf                 mov ecx, edi
// 007eebab  e880a7cfff           call 0x4e9330
// 007eebb0  57                   push edi
// 007eebb1  8bce                 mov ecx, esi
// 007eebb3  e888ffffff           call 0x7eeb40
// 007eebb8  5f                   pop edi
// 007eebb9  5e                   pop esi
// 007eebba  c20400               ret 4
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
