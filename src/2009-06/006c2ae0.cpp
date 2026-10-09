// roc 2009-06 006c2ae0  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2ae0
//
// 006c2ae0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006c2ae3  6a00                 push 0
// 006c2ae5  6aff                 push -1
// 006c2ae7  50                   push eax
// 006c2ae8  e89366ffff           call 0x6b9180
// 006c2aed  83c40c               add esp, 0xc
// 006c2af0  c3                   ret 
// copied from an identical function in another client (function ?clear@lua_exception@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
struct lua_exception {
    void clear();
    int field_0;
    int field_4;
    int field_8;
    int field_c;
};

extern "C" void __cdecl sub_5bd980(int, int, int);

void lua_exception::clear()
{
    sub_5bd980(field_c, -1, 0);
}
}
