// roc 2008-06 007f3180  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3180
//
// 007f3180  56                   push esi
// 007f3181  6a05                 push 5
// 007f3183  33c9                 xor ecx, ecx
// 007f3185  51                   push ecx
// 007f3186  b8705d5600           mov eax, 0x565d70
// 007f318b  50                   push eax
// 007f318c  33f6                 xor esi, esi
// 007f318e  56                   push esi
// 007f318f  ba00315600           mov edx, 0x563100
// 007f3194  52                   push edx
// 007f3195  68b4e78200           push 0x82e7b4
// 007f319a  68bce88200           push 0x82e8bc
// 007f319f  b934459700           mov ecx, 0x974534
// 007f31a4  e85720d7ff           call 0x565200
// 007f31a9  68b0cc7f00           push 0x7fccb0
// 007f31ae  e8fce5eaff           call 0x6a17af
// 007f31b3  83c404               add esp, 4
// 007f31b6  5e                   pop esi
// 007f31b7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_ValidatingDebug@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
