// roc 2011-06 007827f0  unit: seg_00780000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007827f0
//
// 007827f0  56                   push esi
// 007827f1  8b742408             mov esi, dword ptr [esp + 8]
// 007827f5  6a05                 push 5
// 007827f7  6a01                 push 1
// 007827f9  56                   push esi
// 007827fa  e81119feff           call 0x764110
// 007827ff  68edd8ffff           push 0xffffd8ed
// 00782804  56                   push esi
// 00782805  e816fdfdff           call 0x762520
// 0078280a  6a01                 push 1
// 0078280c  56                   push esi
// 0078280d  e80efdfdff           call 0x762520
// 00782812  6a00                 push 0
// 00782814  56                   push esi
// 00782815  e82601feff           call 0x762940
// 0078281a  83c424               add esp, 0x24
// 0078281d  b803000000           mov eax, 3
// 00782822  5e                   pop esi
// 00782823  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_ipairs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
