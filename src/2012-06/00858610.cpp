// roc 2012-06 00858610  unit: seg_00850000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858610
//
// 00858610  51                   push ecx
// 00858611  56                   push esi
// 00858612  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00858616  57                   push edi
// 00858617  8d442408             lea eax, [esp + 8]
// 0085861b  50                   push eax
// 0085861c  6a01                 push 1
// 0085861e  56                   push esi
// 0085861f  e8fcb2fdff           call 0x833920
// 00858624  6a00                 push 0
// 00858626  8bf8                 mov edi, eax
// 00858628  57                   push edi
// 00858629  6a02                 push 2
// 0085862b  56                   push esi
// 0085862c  e84fb3fdff           call 0x833980
// 00858631  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00858635  50                   push eax
// 00858636  51                   push ecx
// 00858637  57                   push edi
// 00858638  56                   push esi
// 00858639  e882b0fdff           call 0x8336c0
// 0085863e  83c42c               add esp, 0x2c
// 00858641  85c0                 test eax, eax
// 00858643  7509                 jne 0x85864e
// 00858645  5f                   pop edi
// 00858646  b801000000           mov eax, 1
// 0085864b  5e                   pop esi
// 0085864c  59                   pop ecx
// 0085864d  c3                   ret 
// 0085864e  56                   push esi
// 0085864f  e83c9afdff           call 0x832090
// 00858654  6afe                 push -2
// 00858656  56                   push esi
// 00858657  e84495fdff           call 0x831ba0
// 0085865c  83c40c               add esp, 0xc
// 0085865f  5f                   pop edi
// 00858660  b802000000           mov eax, 2
// 00858665  5e                   pop esi
// 00858666  59                   pop ecx
// 00858667  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
