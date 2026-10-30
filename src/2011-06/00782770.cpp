// from server: 100% by auto
// roc 2011-06 00782770  unit: seg_00780000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782770
//
// 00782770  56                   push esi
// 00782771  8b742408             mov esi, dword ptr [esp + 8]
// 00782775  6a05                 push 5
// 00782777  6a01                 push 1
// 00782779  56                   push esi
// 0078277a  e89119feff           call 0x764110
// 0078277f  68edd8ffff           push 0xffffd8ed
// 00782784  56                   push esi
// 00782785  e896fdfdff           call 0x762520
// 0078278a  6a01                 push 1
// 0078278c  56                   push esi
// 0078278d  e88efdfdff           call 0x762520
// 00782792  56                   push esi
// 00782793  e86801feff           call 0x762900
// 00782798  83c420               add esp, 0x20
// 0078279b  b803000000           mov eax, 3
// 007827a0  5e                   pop esi
// 007827a1  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
