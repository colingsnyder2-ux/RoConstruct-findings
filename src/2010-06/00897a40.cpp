// roc 2010-06 00897a40  unit: CXTShadowHook  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897a40
//
// 00897a40  56                   push esi
// 00897a41  57                   push edi
// 00897a42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00897a46  8bf1                 mov esi, ecx
// 00897a48  56                   push esi
// 00897a49  8bcf                 mov ecx, edi
// 00897a4b  e8d0fcffff           call 0x897720
// 00897a50  57                   push edi
// 00897a51  8bce                 mov ecx, esi
// 00897a53  e84878ffff           call 0x88f2a0
// 00897a58  5f                   pop edi
// 00897a59  5e                   pop esi
// 00897a5a  c20400               ret 4
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
