// roc 2008-06 007f6dc0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6dc0
//
// 007f6dc0  56                   push esi
// 007f6dc1  6a05                 push 5
// 007f6dc3  33c9                 xor ecx, ecx
// 007f6dc5  51                   push ecx
// 007f6dc6  b820505e00           mov eax, 0x5e5020
// 007f6dcb  50                   push eax
// 007f6dcc  33f6                 xor esi, esi
// 007f6dce  56                   push esi
// 007f6dcf  ba50a26000           mov edx, 0x60a250
// 007f6dd4  52                   push edx
// 007f6dd5  6890248200           push 0x822490
// 007f6dda  68fcf68300           push 0x83f6fc
// 007f6ddf  b958ab9700           mov ecx, 0x97ab58
// 007f6de4  e8f7c8deff           call 0x5e36e0
// 007f6de9  68a0f97f00           push 0x7ff9a0
// 007f6dee  e8bca9eaff           call 0x6a17af
// 007f6df3  83c404               add esp, 4
// 007f6df6  5e                   pop esi
// 007f6df7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_DesiredAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
