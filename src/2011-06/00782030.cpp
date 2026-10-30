// from server: 100% by auto
// roc 2011-06 00782030  unit: lua_exception  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782030
//
// 00782030  6a01                 push 1
// 00782032  6a00                 push 0
// 00782034  56                   push esi
// 00782035  e8560cfeff           call 0x762c90
// 0078203a  6a00                 push 0
// 0078203c  68cabea500           push 0xa5beca
// 00782041  56                   push esi
// 00782042  e81909feff           call 0x762960
// 00782047  6afe                 push -2
// 00782049  56                   push esi
// 0078204a  e8d104feff           call 0x762520
// 0078204f  6afe                 push -2
// 00782051  56                   push esi
// 00782052  e8e90efeff           call 0x762f40
// 00782057  6afe                 push -2
// 00782059  56                   push esi
// 0078205a  e81103feff           call 0x762370
// 0078205f  6afe                 push -2
// 00782061  56                   push esi
// 00782062  e8b904feff           call 0x762520
// 00782067  68c445a900           push 0xa945c4
// 0078206c  6afe                 push -2
// 0078206e  56                   push esi
// 0078206f  e87c0dfeff           call 0x762df0
// 00782074  83c444               add esp, 0x44
// 00782077  6afe                 push -2
// 00782079  56                   push esi
// 0078207a  e8f102feff           call 0x762370
// 0078207f  83c408               add esp, 8
// 00782082  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _createmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
