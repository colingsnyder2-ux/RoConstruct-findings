// roc 2009-06 006c70b0  unit: seg_006c0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c70b0
//
// 006c70b0  56                   push esi
// 006c70b1  8b742408             mov esi, dword ptr [esp + 8]
// 006c70b5  6a05                 push 5
// 006c70b7  6a01                 push 1
// 006c70b9  56                   push esi
// 006c70ba  e8813bffff           call 0x6bac40
// 006c70bf  6a02                 push 2
// 006c70c1  56                   push esi
// 006c70c2  e8c91cffff           call 0x6b8d90
// 006c70c7  6a01                 push 1
// 006c70c9  56                   push esi
// 006c70ca  e8412cffff           call 0x6b9d10
// 006c70cf  83c41c               add esp, 0x1c
// 006c70d2  85c0                 test eax, eax
// 006c70d4  7407                 je 0x6c70dd
// 006c70d6  b802000000           mov eax, 2
// 006c70db  5e                   pop esi
// 006c70dc  c3                   ret 
// 006c70dd  56                   push esi
// 006c70de  e83d22ffff           call 0x6b9320
// 006c70e3  83c404               add esp, 4
// 006c70e6  b801000000           mov eax, 1
// 006c70eb  5e                   pop esi
// 006c70ec  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
