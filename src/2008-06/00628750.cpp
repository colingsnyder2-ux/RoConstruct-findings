// from server: 100% by auto
// roc 2008-06 00628750  unit: seg_00620000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628750
//
// 00628750  56                   push esi
// 00628751  8b742408             mov esi, dword ptr [esp + 8]
// 00628755  6a01                 push 1
// 00628757  56                   push esi
// 00628758  e8338ffeff           call 0x611690
// 0062875d  6a01                 push 1
// 0062875f  56                   push esi
// 00628760  e87b98feff           call 0x611fe0
// 00628765  83c410               add esp, 0x10
// 00628768  85c0                 test eax, eax
// 0062876a  751f                 jne 0x62878b
// 0062876c  50                   push eax
// 0062876d  68c0568400           push 0x8456c0
// 00628772  6a02                 push 2
// 00628774  56                   push esi
// 00628775  e8a68ffeff           call 0x611720
// 0062877a  50                   push eax
// 0062877b  68ac038100           push 0x8103ac
// 00628780  56                   push esi
// 00628781  e8da84feff           call 0x610c60
// 00628786  83c41c               add esp, 0x1c
// 00628789  5e                   pop esi
// 0062878a  c3                   ret 
// 0062878b  56                   push esi
// 0062878c  e87f94feff           call 0x611c10
// 00628791  83c404               add esp, 4
// 00628794  5e                   pop esi
// 00628795  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_assert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
