// from server: 100% by auto
// roc 2009-06 006c7540  unit: seg_006c0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7540
//
// 006c7540  56                   push esi
// 006c7541  8b742408             mov esi, dword ptr [esp + 8]
// 006c7545  6a02                 push 2
// 006c7547  56                   push esi
// 006c7548  e84337ffff           call 0x6bac90
// 006c754d  6a02                 push 2
// 006c754f  56                   push esi
// 006c7550  e83b18ffff           call 0x6b8d90
// 006c7555  6a01                 push 1
// 006c7557  56                   push esi
// 006c7558  e8d318ffff           call 0x6b8e30
// 006c755d  6a01                 push 1
// 006c755f  6aff                 push -1
// 006c7561  6a00                 push 0
// 006c7563  56                   push esi
// 006c7564  e89725ffff           call 0x6b9b00
// 006c7569  33c9                 xor ecx, ecx
// 006c756b  85c0                 test eax, eax
// 006c756d  0f94c1               sete cl
// 006c7570  51                   push ecx
// 006c7571  56                   push esi
// 006c7572  e8b91fffff           call 0x6b9530
// 006c7577  6a01                 push 1
// 006c7579  56                   push esi
// 006c757a  e80119ffff           call 0x6b8e80
// 006c757f  56                   push esi
// 006c7580  e8fb17ffff           call 0x6b8d80
// 006c7585  83c43c               add esp, 0x3c
// 006c7588  5e                   pop esi
// 006c7589  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_xpcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
