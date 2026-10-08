// roc 2008-06 007f34a0  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f34a0
//
// 007f34a0  6a01                 push 1
// 007f34a2  688cf08000           push 0x80f08c
// 007f34a7  33c9                 xor ecx, ecx
// 007f34a9  684c048300           push 0x83044c
// 007f34ae  51                   push ecx
// 007f34af  b8709f5700           mov eax, 0x579f70
// 007f34b4  50                   push eax
// 007f34b5  b9384f9700           mov ecx, 0x974f38
// 007f34ba  e8e15ad8ff           call 0x578fa0
// 007f34bf  68c0d47f00           push 0x7fd4c0
// 007f34c4  e8e6e2eaff           call 0x6a17af
// 007f34c9  59                   pop ecx
// 007f34ca  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EgetContentFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
