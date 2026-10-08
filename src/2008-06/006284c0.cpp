// from server: 100% by auto
// roc 2008-06 006284c0  unit: seg_00620000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006284c0
//
// 006284c0  56                   push esi
// 006284c1  8b742408             mov esi, dword ptr [esp + 8]
// 006284c5  6a05                 push 5
// 006284c7  6a01                 push 1
// 006284c9  56                   push esi
// 006284ca  e87191feff           call 0x611640
// 006284cf  68edd8ffff           push 0xffffd8ed
// 006284d4  56                   push esi
// 006284d5  e8f698feff           call 0x611dd0
// 006284da  6a01                 push 1
// 006284dc  56                   push esi
// 006284dd  e8ee98feff           call 0x611dd0
// 006284e2  56                   push esi
// 006284e3  e8f89cfeff           call 0x6121e0
// 006284e8  83c420               add esp, 0x20
// 006284eb  b803000000           mov eax, 3
// 006284f0  5e                   pop esi
// 006284f1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
