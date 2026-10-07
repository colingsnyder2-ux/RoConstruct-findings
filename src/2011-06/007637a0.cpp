// roc 2011-06 007637a0  unit: seg_00760000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007637a0
//
// 007637a0  8b442408             mov eax, dword ptr [esp + 8]
// 007637a4  56                   push esi
// 007637a5  8b742408             mov esi, dword ptr [esp + 8]
// 007637a9  50                   push eax
// 007637aa  56                   push esi
// 007637ab  e8b0eaffff           call 0x762260
// 007637b0  83c408               add esp, 8
// 007637b3  85c0                 test eax, eax
// 007637b5  7513                 jne 0x7637ca
// 007637b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007637bb  51                   push ecx
// 007637bc  680c65ab00           push 0xab650c
// 007637c1  56                   push esi
// 007637c2  e849ffffff           call 0x763710
// 007637c7  83c40c               add esp, 0xc
// 007637ca  5e                   pop esi
// 007637cb  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
