// roc 2008-06 007f3470  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3470
//
// 007f3470  6a01                 push 1
// 007f3472  688cf08000           push 0x80f08c
// 007f3477  33c9                 xor ecx, ecx
// 007f3479  6848048300           push 0x830448
// 007f347e  51                   push ecx
// 007f347f  b8709f5700           mov eax, 0x579f70
// 007f3484  50                   push eax
// 007f3485  b9c8509700           mov ecx, 0x9750c8
// 007f348a  e8115bd8ff           call 0x578fa0
// 007f348f  6850d57f00           push 0x7fd550
// 007f3494  e816e3eaff           call 0x6a17af
// 007f3499  59                   pop ecx
// 007f349a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunctionOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
