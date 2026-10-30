// from server: 100% by auto
// roc 2007-08 005c67a0  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c67a0
//
// 005c67a0  8b442404             mov eax, dword ptr [esp + 4]
// 005c67a4  8bc8                 mov ecx, eax
// 005c67a6  83e13f               and ecx, 0x3f
// 005c67a9  83f91c               cmp ecx, 0x1c
// 005c67ac  7c17                 jl 0x5c67c5
// 005c67ae  83f91e               cmp ecx, 0x1e
// 005c67b1  7e05                 jle 0x5c67b8
// 005c67b3  83f922               cmp ecx, 0x22
// 005c67b6  750d                 jne 0x5c67c5
// 005c67b8  25000080ff           and eax, 0xff800000
// 005c67bd  f7d8                 neg eax
// 005c67bf  1bc0                 sbb eax, eax
// 005c67c1  83c001               add eax, 1
// 005c67c4  c3                   ret 
// 005c67c5  33c0                 xor eax, eax
// 005c67c7  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkopenop)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
