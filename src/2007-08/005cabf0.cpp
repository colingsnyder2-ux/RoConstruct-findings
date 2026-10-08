// from server: 100% by auto
// roc 2007-08 005cabf0  unit: seg_005c0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cabf0
//
// 005cabf0  53                   push ebx
// 005cabf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005cabf5  6a01                 push 1
// 005cabf7  e844feffff           call 0x5caa40
// 005cabfc  83c404               add esp, 4
// 005cabff  5b                   pop ebx
// 005cac00  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_find)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
