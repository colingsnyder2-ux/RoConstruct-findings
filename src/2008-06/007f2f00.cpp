// roc 2008-06 007f2f00  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2f00
//
// 007f2f00  56                   push esi
// 007f2f01  6a05                 push 5
// 007f2f03  33c9                 xor ecx, ecx
// 007f2f05  51                   push ecx
// 007f2f06  b8f05b5600           mov eax, 0x565bf0
// 007f2f0b  50                   push eax
// 007f2f0c  33f6                 xor esi, esi
// 007f2f0e  56                   push esi
// 007f2f0f  ba20315600           mov edx, 0x563120
// 007f2f14  52                   push edx
// 007f2f15  68f0e78200           push 0x82e7f0
// 007f2f1a  68e4e78200           push 0x82e7e4
// 007f2f1f  b9ac479700           mov ecx, 0x9747ac
// 007f2f24  e8d722d7ff           call 0x565200
// 007f2f29  68f0cd7f00           push 0x7fcdf0
// 007f2f2e  e87ce8eaff           call 0x6a17af
// 007f2f33  83c404               add esp, 4
// 007f2f36  5e                   pop esi
// 007f2f37  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_AnchoredParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
