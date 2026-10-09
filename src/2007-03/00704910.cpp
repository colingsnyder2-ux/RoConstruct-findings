// roc 2007-03 00704910  unit: seg_00700000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704910
//
// 00704910  56                   push esi
// 00704911  57                   push edi
// 00704912  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00704916  8bf1                 mov esi, ecx
// 00704918  56                   push esi
// 00704919  8bcf                 mov ecx, edi
// 0070491b  e8b0f6ffff           call 0x703fd0
// 00704920  57                   push edi
// 00704921  8bce                 mov ecx, esi
// 00704923  e848dffdff           call 0x6e2870
// 00704928  5f                   pop edi
// 00704929  5e                   pop esi
// 0070492a  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTShadowWnd@ns_ROCX0000f3@@QAEXPAU12@@Z)

namespace ns_ROCX0000f3 {
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
