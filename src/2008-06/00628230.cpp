// roc 2008-06 00628230  unit: seg_00620000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628230
//
// 00628230  56                   push esi
// 00628231  8b742408             mov esi, dword ptr [esp + 8]
// 00628235  6a05                 push 5
// 00628237  6a02                 push 2
// 00628239  56                   push esi
// 0062823a  e80194feff           call 0x611640
// 0062823f  e80cffffff           call 0x628150
// 00628244  6a02                 push 2
// 00628246  56                   push esi
// 00628247  e8849bfeff           call 0x611dd0
// 0062824c  6a01                 push 1
// 0062824e  56                   push esi
// 0062824f  e81c9cfeff           call 0x611e70
// 00628254  83c41c               add esp, 0x1c
// 00628257  85c0                 test eax, eax
// 00628259  7435                 je 0x628290
// 0062825b  6a01                 push 1
// 0062825d  56                   push esi
// 0062825e  e8fd9cfeff           call 0x611f60
// 00628263  dc1da8878100         fcomp qword ptr [0x8187a8]
// 00628269  83c408               add esp, 8
// 0062826c  dfe0                 fnstsw ax
// 0062826e  f6c444               test ah, 0x44
// 00628271  7a1d                 jp 0x628290
// 00628273  56                   push esi
// 00628274  e8b7a1feff           call 0x612430
// 00628279  6afe                 push -2
// 0062827b  56                   push esi
// 0062827c  e83f9afeff           call 0x611cc0
// 00628281  6afe                 push -2
// 00628283  56                   push esi
// 00628284  e817a6feff           call 0x6128a0
// 00628289  83c414               add esp, 0x14
// 0062828c  33c0                 xor eax, eax
// 0062828e  5e                   pop esi
// 0062828f  c3                   ret 
// 00628290  6afe                 push -2
// 00628292  56                   push esi
// 00628293  e8a89bfeff           call 0x611e40
// 00628298  83c408               add esp, 8
// 0062829b  85c0                 test eax, eax
// 0062829d  750f                 jne 0x6282ae
// 0062829f  6afe                 push -2
// 006282a1  56                   push esi
// 006282a2  e8f9a5feff           call 0x6128a0
// 006282a7  83c408               add esp, 8
// 006282aa  85c0                 test eax, eax
// 006282ac  750e                 jne 0x6282bc
// 006282ae  68c8558400           push 0x8455c8
// 006282b3  56                   push esi
// 006282b4  e8a789feff           call 0x610c60
// 006282b9  83c408               add esp, 8
// 006282bc  b801000000           mov eax, 1
// 006282c1  5e                   pop esi
// 006282c2  c3                   ret 
// library lua-5.1.1/lbaselib.c (function _luaB_setfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lbaselib.c
