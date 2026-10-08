// roc 2007-03 00770420  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770420
//
// 00770420  6a01                 push 1
// 00770422  6824af7900           push 0x79af24
// 00770427  33c9                 xor ecx, ecx
// 00770429  6810af7900           push 0x79af10
// 0077042e  51                   push ecx
// 0077042f  b8f0c94800           mov eax, 0x48c9f0
// 00770434  50                   push eax
// 00770435  b930888b00           mov ecx, 0x8b8830
// 0077043a  e87100d2ff           call 0x4904b0
// 0077043f  6830867700           push 0x778630
// 00770444  e86aedeaff           call 0x61f1b3
// 00770449  59                   pop ecx
// 0077044a  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_playerFromCharacterOld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
