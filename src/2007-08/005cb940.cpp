// roc 2007-08 005cb940  unit: seg_005c0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cb940
//
// 005cb940  56                   push esi
// 005cb941  8b742408             mov esi, dword ptr [esp + 8]
// 005cb945  6a01                 push 1
// 005cb947  56                   push esi
// 005cb948  e8d339ffff           call 0x5bf320
// 005cb94d  6a01                 push 1
// 005cb94f  56                   push esi
// 005cb950  e8cb25ffff           call 0x5bdf20
// 005cb955  83c410               add esp, 0x10
// 005cb958  85c0                 test eax, eax
// 005cb95a  7510                 jne 0x5cb96c
// 005cb95c  56                   push esi
// 005cb95d  e8ee21ffff           call 0x5bdb50
// 005cb962  83c404               add esp, 4
// 005cb965  b801000000           mov eax, 1
// 005cb96a  5e                   pop esi
// 005cb96b  c3                   ret 
// 005cb96c  689ca27b00           push 0x7ba29c
// 005cb971  6a01                 push 1
// 005cb973  56                   push esi
// 005cb974  e82730ffff           call 0x5be9a0
// 005cb979  83c40c               add esp, 0xc
// 005cb97c  b801000000           mov eax, 1
// 005cb981  5e                   pop esi
// 005cb982  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
