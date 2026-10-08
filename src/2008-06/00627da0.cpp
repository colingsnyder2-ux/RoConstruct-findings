// from server: 100% by auto
// roc 2008-06 00627da0  unit: seg_00620000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00627da0
//
// 00627da0  6a01                 push 1
// 00627da2  6a00                 push 0
// 00627da4  56                   push esi
// 00627da5  e8c6a7feff           call 0x612570
// 00627daa  6a00                 push 0
// 00627dac  6816b78000           push 0x80b716
// 00627db1  56                   push esi
// 00627db2  e889a4feff           call 0x612240
// 00627db7  6afe                 push -2
// 00627db9  56                   push esi
// 00627dba  e811a0feff           call 0x611dd0
// 00627dbf  6afe                 push -2
// 00627dc1  56                   push esi
// 00627dc2  e829aafeff           call 0x6127f0
// 00627dc7  6afe                 push -2
// 00627dc9  56                   push esi
// 00627dca  e8519efeff           call 0x611c20
// 00627dcf  6afe                 push -2
// 00627dd1  56                   push esi
// 00627dd2  e8f99ffeff           call 0x611dd0
// 00627dd7  6884438300           push 0x834384
// 00627ddc  6afe                 push -2
// 00627dde  56                   push esi
// 00627ddf  e8cca8feff           call 0x6126b0
// 00627de4  83c444               add esp, 0x44
// 00627de7  6afe                 push -2
// 00627de9  56                   push esi
// 00627dea  e8319efeff           call 0x611c20
// 00627def  83c408               add esp, 8
// 00627df2  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _createmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
