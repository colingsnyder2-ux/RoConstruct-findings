// roc 2009-06 006c7a90  unit: seg_006c0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7a90
//
// 006c7a90  56                   push esi
// 006c7a91  8b742408             mov esi, dword ptr [esp + 8]
// 006c7a95  56                   push esi
// 006c7a96  e8d51affff           call 0x6b9570
// 006c7a9b  83c404               add esp, 4
// 006c7a9e  85c0                 test eax, eax
// 006c7aa0  7409                 je 0x6c7aab
// 006c7aa2  56                   push esi
// 006c7aa3  e87818ffff           call 0x6b9320
// 006c7aa8  83c404               add esp, 4
// 006c7aab  b801000000           mov eax, 1
// 006c7ab0  5e                   pop esi
// 006c7ab1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_corunning)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
