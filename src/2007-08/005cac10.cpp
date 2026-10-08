// from server: 100% by auto
// roc 2007-08 005cac10  unit: seg_005c0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cac10
//
// 005cac10  53                   push ebx
// 005cac11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005cac15  6a00                 push 0
// 005cac17  e824feffff           call 0x5caa40
// 005cac1c  83c404               add esp, 4
// 005cac1f  5b                   pop ebx
// 005cac20  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
