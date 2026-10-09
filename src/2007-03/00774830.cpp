// roc 2007-03 00774830  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774830
//
// 00774830  56                   push esi
// 00774831  6a05                 push 5
// 00774833  33c9                 xor ecx, ecx
// 00774835  51                   push ecx
// 00774836  b8508d5a00           mov eax, 0x5a8d50
// 0077483b  50                   push eax
// 0077483c  33f6                 xor esi, esi
// 0077483e  56                   push esi
// 0077483f  ba408d5a00           mov edx, 0x5a8d40
// 00774844  52                   push edx
// 00774845  6870a77900           push 0x79a770
// 0077484a  68507a7b00           push 0x7b7a50
// 0077484f  b9d4f38b00           mov ecx, 0x8bf3d4
// 00774854  e8b752e3ff           call 0x5a9b10
// 00774859  6870af7700           push 0x77af70
// 0077485e  e850a9eaff           call 0x61f1b3
// 00774863  83c404               add esp, 4
// 00774866  5e                   pop esi
// 00774867  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_CurrentAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
