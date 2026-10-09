// roc 2011-06 007b41b0  unit: RBX::SleepStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b41b0
//
// 007b41b0  56                   push esi
// 007b41b1  57                   push edi
// 007b41b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b41b6  8bf1                 mov esi, ecx
// 007b41b8  56                   push esi
// 007b41b9  8bcf                 mov ecx, edi
// 007b41bb  e87051d3ff           call 0x4e9330
// 007b41c0  57                   push edi
// 007b41c1  8bce                 mov ecx, esi
// 007b41c3  e818ac0300           call 0x7eede0
// 007b41c8  5f                   pop edi
// 007b41c9  5e                   pop esi
// 007b41ca  c20400               ret 4
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
