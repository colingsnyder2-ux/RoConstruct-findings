// from server: 99% by colin
// roc 2007-08 007738c0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007738c0
//
// 007738c0  6a01                 push 1
// 007738c2  33c9                 xor ecx, ecx
// 007738c4  68184f7b00           push 0x7a4c70
// 007738c9  51                   push ecx
// 007738ca  b8f0315a00           mov eax, 0x58ba30
// 007738cf  50                   push eax
// 007738d0  b910578c00           mov ecx, 0x8c34a8
// 007738d5  e8b600e3ff           call 0x58b1d0
// 007738da  68f0b27700           push 0x77a880
// 007738df  e83fd4ebff           call 0x630d23
// 007738e4  59                   pop ecx
// 007738e5  c3                   ret 
// library rbxgs/v8datamodel\Teams.cpp (function ??__Efunc_teams@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Teams.cpp