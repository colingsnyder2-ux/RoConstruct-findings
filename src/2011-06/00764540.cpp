// from server: 100% by auto
// roc 2011-06 00764540  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764540
//
// 00764540  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00764544  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00764548  8b542404             mov edx, dword ptr [esp + 4]
// 0076454c  6a00                 push 0
// 0076454e  50                   push eax
// 0076454f  51                   push ecx
// 00764550  52                   push edx
// 00764551  e81afeffff           call 0x764370
// 00764556  83c410               add esp, 0x10
// 00764559  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_register)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
