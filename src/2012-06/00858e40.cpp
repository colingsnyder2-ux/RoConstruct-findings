// roc 2012-06 00858e40  unit: seg_00850000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858e40
//
// 00858e40  56                   push esi
// 00858e41  8b742408             mov esi, dword ptr [esp + 8]
// 00858e45  56                   push esi
// 00858e46  e895ffffff           call 0x858de0
// 00858e4b  6a01                 push 1
// 00858e4d  68708d8500           push 0x858d70
// 00858e52  56                   push esi
// 00858e53  e8a893fdff           call 0x832200
// 00858e58  83c410               add esp, 0x10
// 00858e5b  b801000000           mov eax, 1
// 00858e60  5e                   pop esi
// 00858e61  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cowrap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
