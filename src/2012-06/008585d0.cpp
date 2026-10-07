// roc 2012-06 008585d0  unit: seg_00850000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008585d0
//
// 008585d0  56                   push esi
// 008585d1  8b742408             mov esi, dword ptr [esp + 8]
// 008585d5  6a05                 push 5
// 008585d7  6a01                 push 1
// 008585d9  56                   push esi
// 008585da  e8c1b2fdff           call 0x8338a0
// 008585df  68edd8ffff           push 0xffffd8ed
// 008585e4  56                   push esi
// 008585e5  e8c696fdff           call 0x831cb0
// 008585ea  6a01                 push 1
// 008585ec  56                   push esi
// 008585ed  e8be96fdff           call 0x831cb0
// 008585f2  6a00                 push 0
// 008585f4  56                   push esi
// 008585f5  e8d69afdff           call 0x8320d0
// 008585fa  83c424               add esp, 0x24
// 008585fd  b803000000           mov eax, 3
// 00858602  5e                   pop esi
// 00858603  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_ipairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
