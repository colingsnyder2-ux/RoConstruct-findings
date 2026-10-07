// roc 2009-06 006c69b0  unit: lua_exception  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c69b0
//
// 006c69b0  6a01                 push 1
// 006c69b2  6a00                 push 0
// 006c69b4  56                   push esi
// 006c69b5  e8f62cffff           call 0x6b96b0
// 006c69ba  6a00                 push 0
// 006c69bc  6816d28a00           push 0x8ad216
// 006c69c1  56                   push esi
// 006c69c2  e8b929ffff           call 0x6b9380
// 006c69c7  6afe                 push -2
// 006c69c9  56                   push esi
// 006c69ca  e87125ffff           call 0x6b8f40
// 006c69cf  6afe                 push -2
// 006c69d1  56                   push esi
// 006c69d2  e8892fffff           call 0x6b9960
// 006c69d7  6afe                 push -2
// 006c69d9  56                   push esi
// 006c69da  e8b123ffff           call 0x6b8d90
// 006c69df  6afe                 push -2
// 006c69e1  56                   push esi
// 006c69e2  e85925ffff           call 0x6b8f40
// 006c69e7  68fcb28d00           push 0x8db2fc
// 006c69ec  6afe                 push -2
// 006c69ee  56                   push esi
// 006c69ef  e81c2effff           call 0x6b9810
// 006c69f4  83c444               add esp, 0x44
// 006c69f7  6afe                 push -2
// 006c69f9  56                   push esi
// 006c69fa  e89123ffff           call 0x6b8d90
// 006c69ff  83c408               add esp, 8
// 006c6a02  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _createmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
