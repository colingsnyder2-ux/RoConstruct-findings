// roc 2008-06 007f7c00  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7c00
//
// 007f7c00  56                   push esi
// 007f7c01  6a05                 push 5
// 007f7c03  33c9                 xor ecx, ecx
// 007f7c05  51                   push ecx
// 007f7c06  b870c36000           mov eax, 0x60c370
// 007f7c0b  50                   push eax
// 007f7c0c  33f6                 xor esi, esi
// 007f7c0e  56                   push esi
// 007f7c0f  ba60154a00           mov edx, 0x4a1560
// 007f7c14  52                   push edx
// 007f7c15  6890248200           push 0x822490
// 007f7c1a  68842f8400           push 0x842f84
// 007f7c1f  b9d8bd9700           mov ecx, 0x97bdd8
// 007f7c24  e81744e1ff           call 0x60c040
// 007f7c29  6850028000           push 0x800250
// 007f7c2e  e87c9beaff           call 0x6a17af
// 007f7c33  83c404               add esp, 4
// 007f7c36  5e                   pop esi
// 007f7c37  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_TopBottom@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
