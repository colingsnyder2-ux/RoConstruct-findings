// roc 2008-06 007f2ad0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2ad0
//
// 007f2ad0  56                   push esi
// 007f2ad1  6a01                 push 1
// 007f2ad3  33c9                 xor ecx, ecx
// 007f2ad5  51                   push ecx
// 007f2ad6  b8f0a85500           mov eax, 0x55a8f0
// 007f2adb  50                   push eax
// 007f2adc  33f6                 xor esi, esi
// 007f2ade  56                   push esi
// 007f2adf  bac0d67700           mov edx, 0x77d6c0
// 007f2ae4  52                   push edx
// 007f2ae5  6890248200           push 0x822490
// 007f2aea  68d8d98200           push 0x82d9d8
// 007f2aef  b9343d9700           mov ecx, 0x973d34
// 007f2af4  e8276ed6ff           call 0x559920
// 007f2af9  68a0c87f00           push 0x7fc8a0
// 007f2afe  e8aceceaff           call 0x6a17af
// 007f2b03  83c404               add esp, 4
// 007f2b06  5e                   pop esi
// 007f2b07  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?propParent@Instance@RBX@@2V?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
