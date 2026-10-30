// from server: 100% by auto
// roc 2007-08 005c9fc0  unit: seg_005c0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9fc0
//
// 005c9fc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c9fc4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c9fc8  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c9fcc  50                   push eax
// 005c9fcd  51                   push ecx
// 005c9fce  52                   push edx
// 005c9fcf  e83c4cffff           call 0x5bec10
// 005c9fd4  83c40c               add esp, 0xc
// 005c9fd7  33c0                 xor eax, eax
// 005c9fd9  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
