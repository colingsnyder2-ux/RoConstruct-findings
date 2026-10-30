// from server: 100% by auto
// roc 2008-06 006285e0  unit: seg_00620000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006285e0
//
// 006285e0  56                   push esi
// 006285e1  8b742408             mov esi, dword ptr [esp + 8]
// 006285e5  6a00                 push 0
// 006285e7  6a00                 push 0
// 006285e9  6a01                 push 1
// 006285eb  56                   push esi
// 006285ec  e82f91feff           call 0x611720
// 006285f1  50                   push eax
// 006285f2  56                   push esi
// 006285f3  e8788cfeff           call 0x611270
// 006285f8  83c418               add esp, 0x18
// 006285fb  85c0                 test eax, eax
// 006285fd  7507                 jne 0x628606
// 006285ff  b801000000           mov eax, 1
// 00628604  5e                   pop esi
// 00628605  c3                   ret 
// 00628606  56                   push esi
// 00628607  e8d49bfeff           call 0x6121e0
// 0062860c  6afe                 push -2
// 0062860e  56                   push esi
// 0062860f  e8ac96feff           call 0x611cc0
// 00628614  83c40c               add esp, 0xc
// 00628617  b802000000           mov eax, 2
// 0062861c  5e                   pop esi
// 0062861d  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadfile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
