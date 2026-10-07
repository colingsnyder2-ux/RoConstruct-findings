// roc 2010-06 00733300  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733300
//
// 00733300  8b442404             mov eax, dword ptr [esp + 4]
// 00733304  8bc8                 mov ecx, eax
// 00733306  83e13f               and ecx, 0x3f
// 00733309  83f91c               cmp ecx, 0x1c
// 0073330c  7c15                 jl 0x733323
// 0073330e  83f91e               cmp ecx, 0x1e
// 00733311  7e05                 jle 0x733318
// 00733313  83f922               cmp ecx, 0x22
// 00733316  750b                 jne 0x733323
// 00733318  25000080ff           and eax, 0xff800000
// 0073331d  f7d8                 neg eax
// 0073331f  1bc0                 sbb eax, eax
// 00733321  40                   inc eax
// 00733322  c3                   ret 
// 00733323  33c0                 xor eax, eax
// 00733325  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkopenop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
