// roc 2009-12 008c69f0  unit: CXTPPropertyGridInplaceEdit  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c69f0
//
// 008c69f0  83792000             cmp dword ptr [ecx + 0x20], 0
// 008c69f4  7407                 je 0x8c69fd
// 008c69f6  6a00                 push 0
// 008c69f8  e84bd1f2ff           call 0x7f3b48
// 008c69fd  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPPropertyGridInplaceEdit@ns_ROCX000064@@QAEXXZ)

namespace ns_ROCX000064 {
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
