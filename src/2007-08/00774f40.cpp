// roc 2007-08 00774f40  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774f40
//
// 00774f40  56                   push esi
// 00774f41  6a05                 push 5
// 00774f43  33c9                 xor ecx, ecx
// 00774f45  51                   push ecx
// 00774f46  b890d45d00           mov eax, 0x5dd490
// 00774f4b  50                   push eax
// 00774f4c  33f6                 xor esi, esi
// 00774f4e  56                   push esi
// 00774f4f  ba30fe5a00           mov edx, 0x5afe30
// 00774f54  52                   push edx
// 00774f55  6898b67900           push 0x79b698
// 00774f5a  68ec7d7b00           push 0x7b7dec
// 00774f5f  b9e06d8c00           mov ecx, 0x8c6de0
// 00774f64  e85780e6ff           call 0x5dcfc0
// 00774f69  6880be7700           push 0x77be80
// 00774f6e  e8b0bdebff           call 0x630d23
// 00774f73  83c404               add esp, 4
// 00774f76  5e                   pop esi
// 00774f77  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_DesiredAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
