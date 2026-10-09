// roc 2010-06 0087ab90  unit: CXTPPropertyGridInplaceEdit  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087ab90
//
// 0087ab90  83792000             cmp dword ptr [ecx + 0x20], 0
// 0087ab94  7407                 je 0x87ab9d
// 0087ab96  6a00                 push 0
// 0087ab98  e8ebd0f2ff           call 0x7a7c88
// 0087ab9d  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceEdit@ns_ROCX0000dd@@QAEXXZ)

namespace ns_ROCX0000dd {
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
