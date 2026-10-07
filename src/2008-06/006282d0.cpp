// roc 2008-06 006282d0  unit: seg_00620000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006282d0
//
// 006282d0  56                   push esi
// 006282d1  8b742408             mov esi, dword ptr [esp + 8]
// 006282d5  6a01                 push 1
// 006282d7  56                   push esi
// 006282d8  e8b393feff           call 0x611690
// 006282dd  6a02                 push 2
// 006282df  56                   push esi
// 006282e0  e8ab93feff           call 0x611690
// 006282e5  6a02                 push 2
// 006282e7  6a01                 push 1
// 006282e9  56                   push esi
// 006282ea  e8f19bfeff           call 0x611ee0
// 006282ef  50                   push eax
// 006282f0  56                   push esi
// 006282f1  e8faa0feff           call 0x6123f0
// 006282f6  83c424               add esp, 0x24
// 006282f9  b801000000           mov eax, 1
// 006282fe  5e                   pop esi
// 006282ff  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawequal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
