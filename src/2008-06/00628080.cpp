// roc 2008-06 00628080  unit: seg_00620000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628080
//
// 00628080  56                   push esi
// 00628081  8b742408             mov esi, dword ptr [esp + 8]
// 00628085  6a01                 push 1
// 00628087  56                   push esi
// 00628088  e80396feff           call 0x611690
// 0062808d  6a01                 push 1
// 0062808f  56                   push esi
// 00628090  e81ba5feff           call 0x6125b0
// 00628095  83c410               add esp, 0x10
// 00628098  85c0                 test eax, eax
// 0062809a  7510                 jne 0x6280ac
// 0062809c  56                   push esi
// 0062809d  e83ea1feff           call 0x6121e0
// 006280a2  83c404               add esp, 4
// 006280a5  b801000000           mov eax, 1
// 006280aa  5e                   pop esi
// 006280ab  c3                   ret 
// 006280ac  681c558400           push 0x84551c
// 006280b1  6a01                 push 1
// 006280b3  56                   push esi
// 006280b4  e8678cfeff           call 0x610d20
// 006280b9  83c40c               add esp, 0xc
// 006280bc  b801000000           mov eax, 1
// 006280c1  5e                   pop esi
// 006280c2  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
