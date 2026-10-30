// from server: 100% by auto
// roc 2008-06 006288a0  unit: seg_00620000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006288a0
//
// 006288a0  56                   push esi
// 006288a1  8b742408             mov esi, dword ptr [esp + 8]
// 006288a5  6a01                 push 1
// 006288a7  56                   push esi
// 006288a8  e8e38dfeff           call 0x611690
// 006288ad  83c408               add esp, 8
// 006288b0  6a00                 push 0
// 006288b2  6aff                 push -1
// 006288b4  56                   push esi
// 006288b5  e85693feff           call 0x611c10
// 006288ba  83c404               add esp, 4
// 006288bd  48                   dec eax
// 006288be  50                   push eax
// 006288bf  56                   push esi
// 006288c0  e8bba0feff           call 0x612980
// 006288c5  33c9                 xor ecx, ecx
// 006288c7  85c0                 test eax, eax
// 006288c9  0f94c1               sete cl
// 006288cc  51                   push ecx
// 006288cd  56                   push esi
// 006288ce  e81d9bfeff           call 0x6123f0
// 006288d3  6a01                 push 1
// 006288d5  56                   push esi
// 006288d6  e8e593feff           call 0x611cc0
// 006288db  56                   push esi
// 006288dc  e82f93feff           call 0x611c10
// 006288e1  83c424               add esp, 0x24
// 006288e4  5e                   pop esi
// 006288e5  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
