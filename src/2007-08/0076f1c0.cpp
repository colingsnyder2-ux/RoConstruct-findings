// roc 2007-08 0076f1c0  unit: seg_00760000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f1c0
//
// 0076f1c0  6a01                 push 1
// 0076f1c2  6820be7900           push 0x79be20
// 0076f1c7  33c9                 xor ecx, ecx
// 0076f1c9  682cbe7900           push 0x79be2c
// 0076f1ce  51                   push ecx
// 0076f1cf  b8902c4900           mov eax, 0x492c90
// 0076f1d4  50                   push eax
// 0076f1d5  b9b8e18b00           mov ecx, 0x8be1b8
// 0076f1da  e8b173d2ff           call 0x496590
// 0076f1df  6880857700           push 0x778580
// 0076f1e4  e83a1becff           call 0x630d23
// 0076f1e9  59                   pop ecx
// 0076f1ea  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_playerFromCharacter@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
