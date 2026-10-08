// from server: 100% by colin
// roc 2007-08 005c5820  unit: lua_exception  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5820
//
// 005c5820  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005c5823  6a00                 push 0
// 005c5825  6aff                 push -1
// 005c5827  50                   push eax
// 005c5828  e85381ffff           call 0x5bd980
// 005c582d  83c40c               add esp, 0xc
// 005c5830  c3                   ret 

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
