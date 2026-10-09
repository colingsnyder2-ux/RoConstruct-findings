// roc 2010-06 0078c170  unit: RBX::AssemblyStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078c170
//
// 0078c170  56                   push esi
// 0078c171  57                   push edi
// 0078c172  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0078c176  8bf1                 mov esi, ecx
// 0078c178  56                   push esi
// 0078c179  8bcf                 mov ecx, edi
// 0078c17b  e86076fdff           call 0x7637e0
// 0078c180  57                   push edi
// 0078c181  8bce                 mov ecx, esi
// 0078c183  e888ffffff           call 0x78c110
// 0078c188  5f                   pop edi
// 0078c189  5e                   pop esi
// 0078c18a  c20400               ret 4
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
