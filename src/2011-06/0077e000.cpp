// roc 2011-06 0077e000  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e000
//
// 0077e000  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0077e003  6a00                 push 0
// 0077e005  6aff                 push -1
// 0077e007  50                   push eax
// 0077e008  e85347feff           call 0x762760
// 0077e00d  83c40c               add esp, 0xc
// 0077e010  c3                   ret 
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
