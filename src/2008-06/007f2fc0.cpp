// roc 2008-06 007f2fc0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2fc0
//
// 007f2fc0  56                   push esi
// 007f2fc1  6a05                 push 5
// 007f2fc3  33c9                 xor ecx, ecx
// 007f2fc5  51                   push ecx
// 007f2fc6  b8805c5600           mov eax, 0x565c80
// 007f2fcb  50                   push eax
// 007f2fcc  33f6                 xor esi, esi
// 007f2fce  56                   push esi
// 007f2fcf  ba50315600           mov edx, 0x563150
// 007f2fd4  52                   push edx
// 007f2fd5  68f0e78200           push 0x82e7f0
// 007f2fda  681ce88200           push 0x82e81c
// 007f2fdf  b9bc449700           mov ecx, 0x9744bc
// 007f2fe4  e81722d7ff           call 0x565200
// 007f2fe9  6830cc7f00           push 0x7fcc30
// 007f2fee  e8bce7eaff           call 0x6a17af
// 007f2ff3  83c404               add esp, 4
// 007f2ff6  5e                   pop esi
// 007f2ff7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_ModelCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
