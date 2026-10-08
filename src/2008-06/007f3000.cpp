// roc 2008-06 007f3000  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3000
//
// 007f3000  56                   push esi
// 007f3001  6a05                 push 5
// 007f3003  33c9                 xor ecx, ecx
// 007f3005  51                   push ecx
// 007f3006  b8b05c5600           mov eax, 0x565cb0
// 007f300b  50                   push eax
// 007f300c  33f6                 xor esi, esi
// 007f300e  56                   push esi
// 007f300f  ba60315600           mov edx, 0x563160
// 007f3014  52                   push edx
// 007f3015  68f0e78200           push 0x82e7f0
// 007f301a  682ce88200           push 0x82e82c
// 007f301f  b9a8469700           mov ecx, 0x9746a8
// 007f3024  e8d721d7ff           call 0x565200
// 007f3029  6850cc7f00           push 0x7fcc50
// 007f302e  e87ce7eaff           call 0x6a17af
// 007f3033  83c404               add esp, 4
// 007f3036  5e                   pop esi
// 007f3037  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_WorldCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
