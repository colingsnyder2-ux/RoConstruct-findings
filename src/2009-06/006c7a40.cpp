// roc 2009-06 006c7a40  unit: seg_006c0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7a40
//
// 006c7a40  56                   push esi
// 006c7a41  8b742408             mov esi, dword ptr [esp + 8]
// 006c7a45  56                   push esi
// 006c7a46  e895ffffff           call 0x6c79e0
// 006c7a4b  6a01                 push 1
// 006c7a4d  6870796c00           push 0x6c7970
// 006c7a52  56                   push esi
// 006c7a53  e8381affff           call 0x6b9490
// 006c7a58  83c410               add esp, 0x10
// 006c7a5b  b801000000           mov eax, 1
// 006c7a60  5e                   pop esi
// 006c7a61  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cowrap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
