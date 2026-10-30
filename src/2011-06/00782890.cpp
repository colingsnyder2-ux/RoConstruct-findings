// from server: 100% by auto
// roc 2011-06 00782890  unit: seg_00780000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782890
//
// 00782890  56                   push esi
// 00782891  8b742408             mov esi, dword ptr [esp + 8]
// 00782895  6a00                 push 0
// 00782897  6a00                 push 0
// 00782899  6a01                 push 1
// 0078289b  56                   push esi
// 0078289c  e84f19feff           call 0x7641f0
// 007828a1  50                   push eax
// 007828a2  56                   push esi
// 007828a3  e87814feff           call 0x763d20
// 007828a8  83c418               add esp, 0x18
// 007828ab  85c0                 test eax, eax
// 007828ad  7507                 jne 0x7828b6
// 007828af  b801000000           mov eax, 1
// 007828b4  5e                   pop esi
// 007828b5  c3                   ret 
// 007828b6  56                   push esi
// 007828b7  e84400feff           call 0x762900
// 007828bc  6afe                 push -2
// 007828be  56                   push esi
// 007828bf  e84cfbfdff           call 0x762410
// 007828c4  83c40c               add esp, 0xc
// 007828c7  b802000000           mov eax, 2
// 007828cc  5e                   pop esi
// 007828cd  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadfile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
