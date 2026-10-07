// roc 2007-08 005bf700  unit: boost::detail::H::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf700
//
// 005bf700  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005bf704  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bf708  8b542404             mov edx, dword ptr [esp + 4]
// 005bf70c  6a00                 push 0
// 005bf70e  50                   push eax
// 005bf70f  51                   push ecx
// 005bf710  52                   push edx
// 005bf711  e81afeffff           call 0x5bf530
// 005bf716  83c410               add esp, 0x10
// 005bf719  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_register)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
