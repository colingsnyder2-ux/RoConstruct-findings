// from server: 100% by auto
// roc 2007-08 005c7560  unit: lua_exception  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7560
//
// 005c7560  6a01                 push 1
// 005c7562  56                   push esi
// 005c7563  e8186affff           call 0x5bdf80
// 005c7568  686c997b00           push 0x7b996c
// 005c756d  6aff                 push -1
// 005c756f  56                   push esi
// 005c7570  e88b68ffff           call 0x5bde00
// 005c7575  83c414               add esp, 0x14
// 005c7578  56                   push esi
// 005c7579  6aff                 push -1
// 005c757b  56                   push esi
// 005c757c  e8df64ffff           call 0x5bda60
// 005c7581  83c408               add esp, 8
// 005c7584  ffd0                 call eax
// 005c7586  83c404               add esp, 4
// 005c7589  c3                   ret 
// library lua-5.1.4/liolib.c (function _aux_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
