// roc 2008-06 007f7b80  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7b80
//
// 007f7b80  56                   push esi
// 007f7b81  6a05                 push 5
// 007f7b83  33c9                 xor ecx, ecx
// 007f7b85  51                   push ecx
// 007f7b86  b800c66000           mov eax, 0x60c600
// 007f7b8b  50                   push eax
// 007f7b8c  33f6                 xor esi, esi
// 007f7b8e  56                   push esi
// 007f7b8f  ba00295e00           mov edx, 0x5e2900
// 007f7b94  52                   push edx
// 007f7b95  6890248200           push 0x822490
// 007f7b9a  680cf78300           push 0x83f70c
// 007f7b9f  b980be9700           mov ecx, 0x97be80
// 007f7ba4  e8573ee1ff           call 0x60ba00
// 007f7ba9  68f0018000           push 0x8001f0
// 007f7bae  e8fc9beaff           call 0x6a17af
// 007f7bb3  83c404               add esp, 4
// 007f7bb6  5e                   pop esi
// 007f7bb7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_CurrentAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
