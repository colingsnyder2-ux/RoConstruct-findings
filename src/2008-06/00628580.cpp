// roc 2008-06 00628580  unit: seg_00620000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628580
//
// 00628580  51                   push ecx
// 00628581  56                   push esi
// 00628582  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00628586  57                   push edi
// 00628587  8d442408             lea eax, [esp + 8]
// 0062858b  50                   push eax
// 0062858c  6a01                 push 1
// 0062858e  56                   push esi
// 0062858f  e82c91feff           call 0x6116c0
// 00628594  6a00                 push 0
// 00628596  8bf8                 mov edi, eax
// 00628598  57                   push edi
// 00628599  6a02                 push 2
// 0062859b  56                   push esi
// 0062859c  e87f91feff           call 0x611720
// 006285a1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006285a5  50                   push eax
// 006285a6  51                   push ecx
// 006285a7  57                   push edi
// 006285a8  56                   push esi
// 006285a9  e8f28efeff           call 0x6114a0
// 006285ae  83c42c               add esp, 0x2c
// 006285b1  85c0                 test eax, eax
// 006285b3  7509                 jne 0x6285be
// 006285b5  5f                   pop edi
// 006285b6  b801000000           mov eax, 1
// 006285bb  5e                   pop esi
// 006285bc  59                   pop ecx
// 006285bd  c3                   ret 
// 006285be  56                   push esi
// 006285bf  e81c9cfeff           call 0x6121e0
// 006285c4  6afe                 push -2
// 006285c6  56                   push esi
// 006285c7  e8f496feff           call 0x611cc0
// 006285cc  83c40c               add esp, 0xc
// 006285cf  5f                   pop edi
// 006285d0  b802000000           mov eax, 2
// 006285d5  5e                   pop esi
// 006285d6  59                   pop ecx
// 006285d7  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
