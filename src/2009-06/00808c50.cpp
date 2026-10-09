// roc 2009-06 00808c50  unit: CXTShadowHook  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808c50
//
// 00808c50  56                   push esi
// 00808c51  57                   push edi
// 00808c52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00808c56  8bf1                 mov esi, ecx
// 00808c58  56                   push esi
// 00808c59  8bcf                 mov ecx, edi
// 00808c5b  e810fdffff           call 0x808970
// 00808c60  57                   push edi
// 00808c61  8bce                 mov ecx, esi
// 00808c63  e868ccfdff           call 0x7e58d0
// 00808c68  5f                   pop edi
// 00808c69  5e                   pop esi
// 00808c6a  c20400               ret 4
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
