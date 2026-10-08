// roc 2007-03 00770390  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770390
//
// 00770390  6a01                 push 1
// 00770392  33c9                 xor ecx, ecx
// 00770394  68e0ae7900           push 0x79aee0
// 00770399  51                   push ecx
// 0077039a  b810c84800           mov eax, 0x48c810
// 0077039f  50                   push eax
// 007703a0  b910878b00           mov ecx, 0x8b8710
// 007703a5  e8d6fed1ff           call 0x490280
// 007703aa  6810867700           push 0x778610
// 007703af  e8ffedeaff           call 0x61f1b3
// 007703b4  59                   pop ecx
// 007703b5  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_players@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
