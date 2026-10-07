// roc 2009-06 006bb070  unit: RBX::UniversalTool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb070
//
// 006bb070  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006bb074  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bb078  8b542404             mov edx, dword ptr [esp + 4]
// 006bb07c  6a00                 push 0
// 006bb07e  50                   push eax
// 006bb07f  51                   push ecx
// 006bb080  52                   push edx
// 006bb081  e81afeffff           call 0x6baea0
// 006bb086  83c410               add esp, 0x10
// 006bb089  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_register)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
