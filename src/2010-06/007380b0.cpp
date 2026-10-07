// roc 2010-06 007380b0  unit: seg_00730000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007380b0
//
// 007380b0  56                   push esi
// 007380b1  8b742408             mov esi, dword ptr [esp + 8]
// 007380b5  56                   push esi
// 007380b6  e895ffffff           call 0x738050
// 007380bb  6a01                 push 1
// 007380bd  68e07f7300           push 0x737fe0
// 007380c2  56                   push esi
// 007380c3  e89895feff           call 0x721660
// 007380c8  83c410               add esp, 0x10
// 007380cb  b801000000           mov eax, 1
// 007380d0  5e                   pop esi
// 007380d1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cowrap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
