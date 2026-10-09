// roc 2009-12 00797050  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00797050
//
// 00797050  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00797053  6a00                 push 0
// 00797055  6aff                 push -1
// 00797057  50                   push eax
// 00797058  e8431bffff           call 0x788ba0
// 0079705d  83c40c               add esp, 0xc
// 00797060  c3                   ret 
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
