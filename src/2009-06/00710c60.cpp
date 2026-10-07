// roc 2009-06 00710c60  unit: boost::iostreams::zlib_error  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710c60
//
// 00710c60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00710c64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00710c68  8b542404             mov edx, dword ptr [esp + 4]
// 00710c6c  6a00                 push 0
// 00710c6e  50                   push eax
// 00710c6f  51                   push ecx
// 00710c70  52                   push edx
// 00710c71  e88afcffff           call 0x710900
// 00710c76  83c410               add esp, 0x10
// 00710c79  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_register)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
