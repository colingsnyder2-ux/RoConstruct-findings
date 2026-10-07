// roc 2008-06 00611a70  unit: seg_00610000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611a70
//
// 00611a70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00611a74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00611a78  8b542404             mov edx, dword ptr [esp + 4]
// 00611a7c  6a00                 push 0
// 00611a7e  50                   push eax
// 00611a7f  51                   push ecx
// 00611a80  52                   push edx
// 00611a81  e81afeffff           call 0x6118a0
// 00611a86  83c410               add esp, 0x10
// 00611a89  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_register)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
