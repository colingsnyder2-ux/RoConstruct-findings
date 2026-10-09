// roc 2008-06 00621870  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621870
//
// 00621870  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00621873  6a00                 push 0
// 00621875  6aff                 push -1
// 00621877  50                   push eax
// 00621878  e89307ffff           call 0x612010
// 0062187d  83c40c               add esp, 0xc
// 00621880  c3                   ret 
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
