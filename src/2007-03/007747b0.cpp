// roc 2007-03 007747b0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007747b0
//
// 007747b0  56                   push esi
// 007747b1  6a05                 push 5
// 007747b3  33c9                 xor ecx, ecx
// 007747b5  51                   push ecx
// 007747b6  b8f08c5a00           mov eax, 0x5a8cf0
// 007747bb  50                   push eax
// 007747bc  33f6                 xor esi, esi
// 007747be  56                   push esi
// 007747bf  bae08c5a00           mov edx, 0x5a8ce0
// 007747c4  52                   push edx
// 007747c5  6870a77900           push 0x79a770
// 007747ca  68347a7b00           push 0x7b7a34
// 007747cf  b968f48b00           mov ecx, 0x8bf468
// 007747d4  e83753e3ff           call 0x5a9b10
// 007747d9  68f0af7700           push 0x77aff0
// 007747de  e8d0a9eaff           call 0x61f1b3
// 007747e3  83c404               add esp, 4
// 007747e6  5e                   pop esi
// 007747e7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_MaxVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
