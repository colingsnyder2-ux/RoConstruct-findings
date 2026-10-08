// from server: 100% by auto
// roc 2009-06 006c7210  unit: seg_006c0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7210
//
// 006c7210  56                   push esi
// 006c7211  8b742408             mov esi, dword ptr [esp + 8]
// 006c7215  6a00                 push 0
// 006c7217  6a00                 push 0
// 006c7219  6a01                 push 1
// 006c721b  56                   push esi
// 006c721c  e8ff3affff           call 0x6bad20
// 006c7221  50                   push eax
// 006c7222  56                   push esi
// 006c7223  e82836ffff           call 0x6ba850
// 006c7228  83c418               add esp, 0x18
// 006c722b  85c0                 test eax, eax
// 006c722d  7507                 jne 0x6c7236
// 006c722f  b801000000           mov eax, 1
// 006c7234  5e                   pop esi
// 006c7235  c3                   ret 
// 006c7236  56                   push esi
// 006c7237  e8e420ffff           call 0x6b9320
// 006c723c  6afe                 push -2
// 006c723e  56                   push esi
// 006c723f  e8ec1bffff           call 0x6b8e30
// 006c7244  83c40c               add esp, 0xc
// 006c7247  b802000000           mov eax, 2
// 006c724c  5e                   pop esi
// 006c724d  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadfile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
