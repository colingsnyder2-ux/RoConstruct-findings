// roc 2007-03 00770300  unit: seg_00770000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770300
//
// 00770300  33c9                 xor ecx, ecx
// 00770302  51                   push ecx
// 00770303  6880a97900           push 0x79a980
// 00770308  68b4ae7900           push 0x79aeb4
// 0077030d  51                   push ecx
// 0077030e  b830c94800           mov eax, 0x48c930
// 00770313  50                   push eax
// 00770314  b978878b00           mov ecx, 0x8b8778
// 00770319  e8f2f8d1ff           call 0x48fc10
// 0077031e  68d0867700           push 0x7786d0
// 00770323  e88beeeaff           call 0x61f1b3
// 00770328  59                   pop ecx
// 00770329  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_GetPlayerByID@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
