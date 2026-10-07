// roc 2011-06 007825b0  unit: seg_00780000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007825b0
//
// 007825b0  56                   push esi
// 007825b1  8b742408             mov esi, dword ptr [esp + 8]
// 007825b5  6a05                 push 5
// 007825b7  6a01                 push 1
// 007825b9  56                   push esi
// 007825ba  e8511bfeff           call 0x764110
// 007825bf  6a02                 push 2
// 007825c1  56                   push esi
// 007825c2  e8991bfeff           call 0x764160
// 007825c7  6a02                 push 2
// 007825c9  56                   push esi
// 007825ca  e8a1fdfdff           call 0x762370
// 007825cf  6a01                 push 1
// 007825d1  56                   push esi
// 007825d2  e83906feff           call 0x762c10
// 007825d7  83c424               add esp, 0x24
// 007825da  b801000000           mov eax, 1
// 007825df  5e                   pop esi
// 007825e0  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawget)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
