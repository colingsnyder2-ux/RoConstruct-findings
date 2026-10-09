// roc 2012-06 00854490  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854490
//
// 00854490  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00854493  6a00                 push 0
// 00854495  6aff                 push -1
// 00854497  50                   push eax
// 00854498  e853dafdff           call 0x831ef0
// 0085449d  83c40c               add esp, 0xc
// 008544a0  c3                   ret 
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
