// roc 2007-08 0076f0d0  unit: seg_00760000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f0d0
//
// 0076f0d0  6a01                 push 1
// 0076f0d2  33c9                 xor ecx, ecx
// 0076f0d4  68d0bd7900           push 0x79bdd0
// 0076f0d9  51                   push ecx
// 0076f0da  b8b02a4900           mov eax, 0x492ab0
// 0076f0df  50                   push eax
// 0076f0e0  b968e08b00           mov ecx, 0x8be068
// 0076f0e5  e87672d2ff           call 0x496360
// 0076f0ea  68b0857700           push 0x7785b0
// 0076f0ef  e82f1cecff           call 0x630d23
// 0076f0f4  59                   pop ecx
// 0076f0f5  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_players@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
