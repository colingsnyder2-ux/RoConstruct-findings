// roc 2012-06 00a68910  unit: PAVCXTShadowWnd::?$CList  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68910
//
// 00a68910  56                   push esi
// 00a68911  57                   push edi
// 00a68912  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a68916  8bf1                 mov esi, ecx
// 00a68918  56                   push esi
// 00a68919  8bcf                 mov ecx, edi
// 00a6891b  e850fdffff           call 0xa68670
// 00a68920  57                   push edi
// 00a68921  8bce                 mov ecx, esi
// 00a68923  e838fdfdff           call 0xa48660
// 00a68928  5f                   pop edi
// 00a68929  5e                   pop esi
// 00a6892a  c20400               ret 4
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
