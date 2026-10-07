// roc 2007-08 005cbe50  unit: seg_005c0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbe50
//
// 005cbe50  51                   push ecx
// 005cbe51  56                   push esi
// 005cbe52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005cbe56  57                   push edi
// 005cbe57  8d442408             lea eax, [esp + 8]
// 005cbe5b  50                   push eax
// 005cbe5c  6a01                 push 1
// 005cbe5e  56                   push esi
// 005cbe5f  e8ec34ffff           call 0x5bf350
// 005cbe64  6a00                 push 0
// 005cbe66  8bf8                 mov edi, eax
// 005cbe68  57                   push edi
// 005cbe69  6a02                 push 2
// 005cbe6b  56                   push esi
// 005cbe6c  e83f35ffff           call 0x5bf3b0
// 005cbe71  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005cbe75  50                   push eax
// 005cbe76  51                   push ecx
// 005cbe77  57                   push edi
// 005cbe78  56                   push esi
// 005cbe79  e8d232ffff           call 0x5bf150
// 005cbe7e  83c42c               add esp, 0x2c
// 005cbe81  85c0                 test eax, eax
// 005cbe83  7509                 jne 0x5cbe8e
// 005cbe85  5f                   pop edi
// 005cbe86  b801000000           mov eax, 1
// 005cbe8b  5e                   pop esi
// 005cbe8c  59                   pop ecx
// 005cbe8d  c3                   ret 
// 005cbe8e  56                   push esi
// 005cbe8f  e8bc1cffff           call 0x5bdb50
// 005cbe94  6afe                 push -2
// 005cbe96  56                   push esi
// 005cbe97  e89417ffff           call 0x5bd630
// 005cbe9c  83c40c               add esp, 0xc
// 005cbe9f  5f                   pop edi
// 005cbea0  b802000000           mov eax, 2
// 005cbea5  5e                   pop esi
// 005cbea6  59                   pop ecx
// 005cbea7  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
