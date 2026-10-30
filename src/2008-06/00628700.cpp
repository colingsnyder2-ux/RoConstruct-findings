// from server: 100% by auto
// roc 2008-06 00628700  unit: seg_00620000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628700
//
// 00628700  53                   push ebx
// 00628701  56                   push esi
// 00628702  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00628706  57                   push edi
// 00628707  6a00                 push 0
// 00628709  6a00                 push 0
// 0062870b  6a01                 push 1
// 0062870d  56                   push esi
// 0062870e  e80d90feff           call 0x611720
// 00628713  56                   push esi
// 00628714  8bf8                 mov edi, eax
// 00628716  e8f594feff           call 0x611c10
// 0062871b  57                   push edi
// 0062871c  56                   push esi
// 0062871d  8bd8                 mov ebx, eax
// 0062871f  e84c8bfeff           call 0x611270
// 00628724  83c41c               add esp, 0x1c
// 00628727  85c0                 test eax, eax
// 00628729  7409                 je 0x628734
// 0062872b  56                   push esi
// 0062872c  e83fa4feff           call 0x612b70
// 00628731  83c404               add esp, 4
// 00628734  6aff                 push -1
// 00628736  6a00                 push 0
// 00628738  56                   push esi
// 00628739  e8e2a1feff           call 0x612920
// 0062873e  56                   push esi
// 0062873f  e8cc94feff           call 0x611c10
// 00628744  83c410               add esp, 0x10
// 00628747  5f                   pop edi
// 00628748  5e                   pop esi
// 00628749  2bc3                 sub eax, ebx
// 0062874b  5b                   pop ebx
// 0062874c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_dofile)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
