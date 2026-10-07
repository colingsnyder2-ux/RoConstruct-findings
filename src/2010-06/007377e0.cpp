// roc 2010-06 007377e0  unit: seg_00730000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007377e0
//
// 007377e0  56                   push esi
// 007377e1  8b742408             mov esi, dword ptr [esp + 8]
// 007377e5  6a05                 push 5
// 007377e7  6a01                 push 1
// 007377e9  56                   push esi
// 007377ea  e8b1b6feff           call 0x722ea0
// 007377ef  68edd8ffff           push 0xffffd8ed
// 007377f4  56                   push esi
// 007377f5  e81699feff           call 0x721110
// 007377fa  6a01                 push 1
// 007377fc  56                   push esi
// 007377fd  e80e99feff           call 0x721110
// 00737802  6a00                 push 0
// 00737804  56                   push esi
// 00737805  e8269dfeff           call 0x721530
// 0073780a  83c424               add esp, 0x24
// 0073780d  b803000000           mov eax, 3
// 00737812  5e                   pop esi
// 00737813  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_ipairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
