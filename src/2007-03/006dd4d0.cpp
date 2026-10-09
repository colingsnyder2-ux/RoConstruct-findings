// roc 2007-03 006dd4d0  unit: seg_006d0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dd4d0
//
// 006dd4d0  83792000             cmp dword ptr [ecx + 0x20], 0
// 006dd4d4  7407                 je 0x6dd4dd
// 006dd4d6  6a00                 push 0
// 006dd4d8  e8fb0ef4ff           call 0x61e3d8
// 006dd4dd  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceEdit@ns_ROCX00006a@@QAEXXZ)

namespace ns_ROCX00006a {
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
