// from server: 100% by auto
// roc 2011-06 00764160  unit: seg_00760000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764160
//
// 00764160  56                   push esi
// 00764161  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00764165  57                   push edi
// 00764166  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0076416a  56                   push esi
// 0076416b  57                   push edi
// 0076416c  e8dfe3ffff           call 0x762550
// 00764171  83c408               add esp, 8
// 00764174  83f8ff               cmp eax, -1
// 00764177  750f                 jne 0x764188
// 00764179  68c465ab00           push 0xab65c4
// 0076417e  56                   push esi
// 0076417f  57                   push edi
// 00764180  e81bfeffff           call 0x763fa0
// 00764185  83c40c               add esp, 0xc
// 00764188  5f                   pop edi
// 00764189  5e                   pop esi
// 0076418a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkany)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
