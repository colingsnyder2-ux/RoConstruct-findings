// from server: 100% by auto
// roc 2008-06 006288f0  unit: seg_00620000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006288f0
//
// 006288f0  56                   push esi
// 006288f1  8b742408             mov esi, dword ptr [esp + 8]
// 006288f5  6a02                 push 2
// 006288f7  56                   push esi
// 006288f8  e8938dfeff           call 0x611690
// 006288fd  6a02                 push 2
// 006288ff  56                   push esi
// 00628900  e81b93feff           call 0x611c20
// 00628905  6a01                 push 1
// 00628907  56                   push esi
// 00628908  e8b393feff           call 0x611cc0
// 0062890d  6a01                 push 1
// 0062890f  6aff                 push -1
// 00628911  6a00                 push 0
// 00628913  56                   push esi
// 00628914  e867a0feff           call 0x612980
// 00628919  33c9                 xor ecx, ecx
// 0062891b  85c0                 test eax, eax
// 0062891d  0f94c1               sete cl
// 00628920  51                   push ecx
// 00628921  56                   push esi
// 00628922  e8c99afeff           call 0x6123f0
// 00628927  6a01                 push 1
// 00628929  56                   push esi
// 0062892a  e8e193feff           call 0x611d10
// 0062892f  56                   push esi
// 00628930  e8db92feff           call 0x611c10
// 00628935  83c43c               add esp, 0x3c
// 00628938  5e                   pop esi
// 00628939  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_xpcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
