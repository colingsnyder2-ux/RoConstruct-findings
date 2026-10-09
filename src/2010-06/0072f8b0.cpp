// roc 2010-06 0072f8b0  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072f8b0
//
// 0072f8b0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0072f8b3  6a00                 push 0
// 0072f8b5  6aff                 push -1
// 0072f8b7  50                   push eax
// 0072f8b8  e8931affff           call 0x721350
// 0072f8bd  83c40c               add esp, 0xc
// 0072f8c0  c3                   ret 
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
