// from server: 100% by colin
// roc 2007-08 006f6340  unit: CXTPPropertyGridInplaceEdit  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6340
//
// 006f6340  83792000             cmp dword ptr [ecx + 0x20], 0
// 006f6344  7407                 je 0x6f634d
// 006f6346  6a00                 push 0
// 006f6348  e8fd9bf3ff           call 0x62ff4a
// 006f634d  c3                   ret 

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
