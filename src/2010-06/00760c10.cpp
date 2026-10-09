// roc 2010-06 00760c10  unit: RBX::SleepStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00760c10
//
// 00760c10  56                   push esi
// 00760c11  57                   push edi
// 00760c12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00760c16  8bf1                 mov esi, ecx
// 00760c18  56                   push esi
// 00760c19  8bcf                 mov ecx, edi
// 00760c1b  e8c02b0000           call 0x7637e0
// 00760c20  57                   push edi
// 00760c21  8bce                 mov ecx, esi
// 00760c23  e878b70200           call 0x78c3a0
// 00760c28  5f                   pop edi
// 00760c29  5e                   pop esi
// 00760c2a  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTShadowWnd@ns_ROCX00006c@@QAEXPAU12@@Z)

namespace ns_ROCX00006c {
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
