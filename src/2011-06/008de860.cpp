// roc 2011-06 008de860  unit: CXTPPropertyGridInplaceEdit  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de860
//
// 008de860  83792000             cmp dword ptr [ecx + 0x20], 0
// 008de864  7407                 je 0x8de86d
// 008de866  6a00                 push 0
// 008de868  e8d9baf2ff           call 0x80a346
// 008de86d  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceEdit@ns_ROCX0000a9@@QAEXXZ)

namespace ns_ROCX0000a9 {
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
