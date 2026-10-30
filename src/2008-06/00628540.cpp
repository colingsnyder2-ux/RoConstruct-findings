// from server: 100% by auto
// roc 2008-06 00628540  unit: seg_00620000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628540
//
// 00628540  56                   push esi
// 00628541  8b742408             mov esi, dword ptr [esp + 8]
// 00628545  6a05                 push 5
// 00628547  6a01                 push 1
// 00628549  56                   push esi
// 0062854a  e8f190feff           call 0x611640
// 0062854f  68edd8ffff           push 0xffffd8ed
// 00628554  56                   push esi
// 00628555  e87698feff           call 0x611dd0
// 0062855a  6a01                 push 1
// 0062855c  56                   push esi
// 0062855d  e86e98feff           call 0x611dd0
// 00628562  6a00                 push 0
// 00628564  56                   push esi
// 00628565  e8b69cfeff           call 0x612220
// 0062856a  83c424               add esp, 0x24
// 0062856d  b803000000           mov eax, 3
// 00628572  5e                   pop esi
// 00628573  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_ipairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
