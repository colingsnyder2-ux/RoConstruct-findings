// roc 2007-08 00773890  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773890
//
// 00773890  6a01                 push 1
// 00773892  33c9                 xor ecx, ecx
// 00773894  68084f7b00           push 0x7b4f08
// 00773899  51                   push ecx
// 0077389a  b820cc4000           mov eax, 0x40cc20
// 0077389f  50                   push eax
// 007738a0  b9e0568c00           mov ecx, 0x8c56e0
// 007738a5  e81600e3ff           call 0x5a38c0
// 007738aa  6800b37700           push 0x77b300
// 007738af  e86fd4ebff           call 0x630d23
// 007738b4  59                   pop ecx
// 007738b5  c3                   ret 
// library rbxgs/v8datamodel\Teams.cpp (function ??__Eteams_rebalanceTeamsFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp
