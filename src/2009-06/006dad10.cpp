// roc 2009-06 006dad10  unit: RBX::AssemblyStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006dad10
//
// 006dad10  56                   push esi
// 006dad11  57                   push edi
// 006dad12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006dad16  8bf1                 mov esi, ecx
// 006dad18  56                   push esi
// 006dad19  8bcf                 mov ecx, edi
// 006dad1b  e850afffff           call 0x6d5c70
// 006dad20  57                   push edi
// 006dad21  8bce                 mov ecx, esi
// 006dad23  e8e8b00100           call 0x6f5e10
// 006dad28  5f                   pop edi
// 006dad29  5e                   pop esi
// 006dad2a  c20400               ret 4
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
