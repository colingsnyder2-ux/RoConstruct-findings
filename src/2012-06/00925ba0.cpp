// roc 2012-06 00925ba0  unit: RBX::SleepStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00925ba0
//
// 00925ba0  56                   push esi
// 00925ba1  57                   push edi
// 00925ba2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00925ba6  8bf1                 mov esi, ecx
// 00925ba8  56                   push esi
// 00925ba9  8bcf                 mov ecx, edi
// 00925bab  e8f016ffff           call 0x9172a0
// 00925bb0  57                   push edi
// 00925bb1  8bce                 mov ecx, esi
// 00925bb3  e878d80300           call 0x963430
// 00925bb8  5f                   pop edi
// 00925bb9  5e                   pop esi
// 00925bba  c20400               ret 4
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
