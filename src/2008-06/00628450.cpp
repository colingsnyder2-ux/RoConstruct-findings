// from server: 100% by auto
// roc 2008-06 00628450  unit: seg_00620000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628450
//
// 00628450  56                   push esi
// 00628451  8b742408             mov esi, dword ptr [esp + 8]
// 00628455  6a01                 push 1
// 00628457  56                   push esi
// 00628458  e83392feff           call 0x611690
// 0062845d  6a01                 push 1
// 0062845f  56                   push esi
// 00628460  e89b99feff           call 0x611e00
// 00628465  50                   push eax
// 00628466  56                   push esi
// 00628467  e8b499feff           call 0x611e20
// 0062846c  50                   push eax
// 0062846d  56                   push esi
// 0062846e  e80d9efeff           call 0x612280
// 00628473  83c420               add esp, 0x20
// 00628476  b801000000           mov eax, 1
// 0062847b  5e                   pop esi
// 0062847c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
