// roc 2009-12 007b8f00  unit: RBX::SleepStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b8f00
//
// 007b8f00  56                   push esi
// 007b8f01  57                   push edi
// 007b8f02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b8f06  8bf1                 mov esi, ecx
// 007b8f08  56                   push esi
// 007b8f09  8bcf                 mov ecx, edi
// 007b8f0b  e810a0ffff           call 0x7b2f20
// 007b8f10  57                   push edi
// 007b8f11  8bce                 mov ecx, esi
// 007b8f13  e828100200           call 0x7d9f40
// 007b8f18  5f                   pop edi
// 007b8f19  5e                   pop esi
// 007b8f1a  c20400               ret 4
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
