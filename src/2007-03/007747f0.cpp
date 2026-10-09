// roc 2007-03 007747f0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007747f0
//
// 007747f0  56                   push esi
// 007747f1  6a05                 push 5
// 007747f3  33c9                 xor ecx, ecx
// 007747f5  51                   push ecx
// 007747f6  b8208d5a00           mov eax, 0x5a8d20
// 007747fb  50                   push eax
// 007747fc  33f6                 xor esi, esi
// 007747fe  56                   push esi
// 007747ff  ba108d5a00           mov edx, 0x5a8d10
// 00774804  52                   push edx
// 00774805  6870a77900           push 0x79a770
// 0077480a  68407a7b00           push 0x7b7a40
// 0077480f  b94cf48b00           mov ecx, 0x8bf44c
// 00774814  e8f752e3ff           call 0x5a9b10
// 00774819  68d0af7700           push 0x77afd0
// 0077481e  e890a9eaff           call 0x61f1b3
// 00774823  83c404               add esp, 4
// 00774826  5e                   pop esi
// 00774827  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_DesiredAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
