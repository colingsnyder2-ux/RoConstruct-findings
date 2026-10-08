// from server: 100% by colin
// roc 2007-08 00712d20  unit: PAVCXTShadowWnd::?$CList  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712d20
//
// 00712d20  56                   push esi
// 00712d21  57                   push edi
// 00712d22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00712d26  8bf1                 mov esi, ecx
// 00712d28  56                   push esi
// 00712d29  8bcf                 mov ecx, edi
// 00712d2b  e850fdffff           call 0x712a80
// 00712d30  57                   push edi
// 00712d31  8bce                 mov ecx, esi
// 00712d33  e8381afdff           call 0x6e4770
// 00712d38  5f                   pop edi
// 00712d39  5e                   pop esi
// 00712d3a  c20400               ret 4

struct CXTShadowWnd {
    void sub_712a80(CXTShadowWnd*);
    void sub_6e4770(CXTShadowWnd*);
    void func(CXTShadowWnd*);
};

void CXTShadowWnd::func(CXTShadowWnd* other) {
    other->sub_712a80(this);
    this->sub_6e4770(other);
}
