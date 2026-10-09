// roc 2008-06 007f7b00  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7b00
//
// 007f7b00  56                   push esi
// 007f7b01  6a05                 push 5
// 007f7b03  33c9                 xor ecx, ecx
// 007f7b05  51                   push ecx
// 007f7b06  b880c56000           mov eax, 0x60c580
// 007f7b0b  50                   push eax
// 007f7b0c  33f6                 xor esi, esi
// 007f7b0e  56                   push esi
// 007f7b0f  ba40a26000           mov edx, 0x60a240
// 007f7b14  52                   push edx
// 007f7b15  6890248200           push 0x822490
// 007f7b1a  68f0f68300           push 0x83f6f0
// 007f7b1f  b91cbe9700           mov ecx, 0x97be1c
// 007f7b24  e8d73ee1ff           call 0x60ba00
// 007f7b29  68b0028000           push 0x8002b0
// 007f7b2e  e87c9ceaff           call 0x6a17af
// 007f7b33  83c404               add esp, 4
// 007f7b36  5e                   pop esi
// 007f7b37  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_MaxVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
