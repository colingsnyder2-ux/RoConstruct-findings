// roc 2008-06 007f6e00  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6e00
//
// 007f6e00  56                   push esi
// 007f6e01  6a05                 push 5
// 007f6e03  33c9                 xor ecx, ecx
// 007f6e05  51                   push ecx
// 007f6e06  b880505e00           mov eax, 0x5e5080
// 007f6e0b  50                   push eax
// 007f6e0c  33f6                 xor esi, esi
// 007f6e0e  56                   push esi
// 007f6e0f  ba00295e00           mov edx, 0x5e2900
// 007f6e14  52                   push edx
// 007f6e15  6890248200           push 0x822490
// 007f6e1a  680cf78300           push 0x83f70c
// 007f6e1f  b9e0aa9700           mov ecx, 0x97aae0
// 007f6e24  e8b7c8deff           call 0x5e36e0
// 007f6e29  6840f97f00           push 0x7ff940
// 007f6e2e  e87ca9eaff           call 0x6a17af
// 007f6e33  83c404               add esp, 4
// 007f6e36  5e                   pop esi
// 007f6e37  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_CurrentAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
