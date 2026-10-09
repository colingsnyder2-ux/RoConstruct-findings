// roc 2007-03 005bfa00  unit: seg_005b0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bfa00
//
// 005bfa00  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005bfa03  6a00                 push 0
// 005bfa05  6aff                 push -1
// 005bfa07  50                   push eax
// 005bfa08  e84394ffff           call 0x5b8e50
// 005bfa0d  83c40c               add esp, 0xc
// 005bfa10  c3                   ret 
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
