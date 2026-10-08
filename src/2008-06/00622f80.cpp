// from server: 100% by auto
// roc 2008-06 00622f80  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622f80
//
// 00622f80  8b442404             mov eax, dword ptr [esp + 4]
// 00622f84  8bc8                 mov ecx, eax
// 00622f86  83e13f               and ecx, 0x3f
// 00622f89  83f91c               cmp ecx, 0x1c
// 00622f8c  7c15                 jl 0x622fa3
// 00622f8e  83f91e               cmp ecx, 0x1e
// 00622f91  7e05                 jle 0x622f98
// 00622f93  83f922               cmp ecx, 0x22
// 00622f96  750b                 jne 0x622fa3
// 00622f98  25000080ff           and eax, 0xff800000
// 00622f9d  f7d8                 neg eax
// 00622f9f  1bc0                 sbb eax, eax
// 00622fa1  40                   inc eax
// 00622fa2  c3                   ret 
// 00622fa3  33c0                 xor eax, eax
// 00622fa5  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkopenop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
