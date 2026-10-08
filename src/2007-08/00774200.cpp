// roc 2007-08 00774200  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774200
//
// 00774200  56                   push esi
// 00774201  6a05                 push 5
// 00774203  33c9                 xor ecx, ecx
// 00774205  51                   push ecx
// 00774206  b840fe5a00           mov eax, 0x5afe40
// 0077420b  50                   push eax
// 0077420c  33f6                 xor esi, esi
// 0077420e  56                   push esi
// 0077420f  ba30fe5a00           mov edx, 0x5afe30
// 00774214  52                   push edx
// 00774215  6898b67900           push 0x79b698
// 0077421a  68ec7d7b00           push 0x7b7dec
// 0077421f  b9585e8c00           mov ecx, 0x8c5e58
// 00774224  e8e7cae3ff           call 0x5b0d10
// 00774229  68d0b67700           push 0x77b6d0
// 0077422e  e8f0caebff           call 0x630d23
// 00774233  83c404               add esp, 4
// 00774236  5e                   pop esi
// 00774237  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_DesiredAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
