// roc 2012-06 00858e90  unit: seg_00850000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858e90
//
// 00858e90  56                   push esi
// 00858e91  8b742408             mov esi, dword ptr [esp + 8]
// 00858e95  56                   push esi
// 00858e96  e84594fdff           call 0x8322e0
// 00858e9b  83c404               add esp, 4
// 00858e9e  85c0                 test eax, eax
// 00858ea0  7409                 je 0x858eab
// 00858ea2  56                   push esi
// 00858ea3  e8e891fdff           call 0x832090
// 00858ea8  83c404               add esp, 4
// 00858eab  b801000000           mov eax, 1
// 00858eb0  5e                   pop esi
// 00858eb1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_corunning)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
