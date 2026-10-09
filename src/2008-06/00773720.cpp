// roc 2008-06 00773720  unit: CXTPPropertyGridInplaceEdit  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773720
//
// 00773720  83792000             cmp dword ptr [ecx + 0x20], 0
// 00773724  7407                 je 0x77372d
// 00773726  6a00                 push 0
// 00773728  e841d2f2ff           call 0x6a096e
// 0077372d  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceEdit@ns_ROCX0000f5@@QAEXXZ)

namespace ns_ROCX0000f5 {
struct CXTPPropertyGridInplaceEdit
{
    char pad[0x20];
    void* field_20;
    void f();
};

extern "C" void __stdcall sub_0062ff4a(void*);

void CXTPPropertyGridInplaceEdit::f()
{
    if (field_20 != 0)
        sub_0062ff4a(0);
}
}
