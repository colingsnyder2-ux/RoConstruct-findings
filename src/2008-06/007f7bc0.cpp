// roc 2008-06 007f7bc0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7bc0
//
// 007f7bc0  56                   push esi
// 007f7bc1  6a05                 push 5
// 007f7bc3  33c9                 xor ecx, ecx
// 007f7bc5  51                   push ecx
// 007f7bc6  b840c36000           mov eax, 0x60c340
// 007f7bcb  50                   push eax
// 007f7bcc  33f6                 xor esi, esi
// 007f7bce  56                   push esi
// 007f7bcf  ba309a6000           mov edx, 0x609a30
// 007f7bd4  52                   push edx
// 007f7bd5  6890248200           push 0x822490
// 007f7bda  68a8368400           push 0x8436a8
// 007f7bdf  b95cbe9700           mov ecx, 0x97be5c
// 007f7be4  e89741e1ff           call 0x60bd80
// 007f7be9  6870028000           push 0x800270
// 007f7bee  e8bc9beaff           call 0x6a17af
// 007f7bf3  83c404               add esp, 4
// 007f7bf6  5e                   pop esi
// 007f7bf7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_FaceId@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
