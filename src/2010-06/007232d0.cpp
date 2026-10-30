// from server: 100% by auto
// roc 2010-06 007232d0  unit: RBX::UniversalTool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007232d0
//
// 007232d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007232d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007232d8  8b542404             mov edx, dword ptr [esp + 4]
// 007232dc  6a00                 push 0
// 007232de  50                   push eax
// 007232df  51                   push ecx
// 007232e0  52                   push edx
// 007232e1  e81afeffff           call 0x723100
// 007232e6  83c410               add esp, 0x10
// 007232e9  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_register)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
