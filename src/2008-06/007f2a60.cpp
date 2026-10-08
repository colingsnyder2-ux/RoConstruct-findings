// roc 2008-06 007f2a60  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2a60
//
// 007f2a60  6a01                 push 1
// 007f2a62  33c9                 xor ecx, ecx
// 007f2a64  51                   push ecx
// 007f2a65  51                   push ecx
// 007f2a66  b8b0f24100           mov eax, 0x41f2b0
// 007f2a6b  50                   push eax
// 007f2a6c  6890248200           push 0x822490
// 007f2a71  68ccd98200           push 0x82d9cc
// 007f2a76  b9183d9700           mov ecx, 0x973d18
// 007f2a7b  e8506dd6ff           call 0x5597d0
// 007f2a80  6800c97f00           push 0x7fc900
// 007f2a85  e825edeaff           call 0x6a17af
// 007f2a8a  59                   pop ecx
// 007f2a8b  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Eprop_className@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
