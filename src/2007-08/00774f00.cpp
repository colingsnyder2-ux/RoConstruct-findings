// roc 2007-08 00774f00  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774f00
//
// 00774f00  56                   push esi
// 00774f01  6a05                 push 5
// 00774f03  33c9                 xor ecx, ecx
// 00774f05  51                   push ecx
// 00774f06  b850d45d00           mov eax, 0x5dd450
// 00774f0b  50                   push eax
// 00774f0c  33f6                 xor esi, esi
// 00774f0e  56                   push esi
// 00774f0f  ba00fe5a00           mov edx, 0x5afe00
// 00774f14  52                   push edx
// 00774f15  6898b67900           push 0x79b698
// 00774f1a  68e07d7b00           push 0x7b7de0
// 00774f1f  b9686d8c00           mov ecx, 0x8c6d68
// 00774f24  e89780e6ff           call 0x5dcfc0
// 00774f29  68a0be7700           push 0x77bea0
// 00774f2e  e8f0bdebff           call 0x630d23
// 00774f33  83c404               add esp, 4
// 00774f36  5e                   pop esi
// 00774f37  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_MaxVelocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
