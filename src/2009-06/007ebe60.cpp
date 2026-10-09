// roc 2009-06 007ebe60  unit: CXTPPropertyGridInplaceEdit  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ebe60
//
// 007ebe60  83792000             cmp dword ptr [ecx + 0x20], 0
// 007ebe64  7407                 je 0x7ebe6d
// 007ebe66  6a00                 push 0
// 007ebe68  e8b3cef2ff           call 0x718d20
// 007ebe6d  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceEdit@ns_ROCX0000d3@@QAEXXZ)

namespace ns_ROCX0000d3 {
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
