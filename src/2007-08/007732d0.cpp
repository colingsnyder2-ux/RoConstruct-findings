// roc 2007-08 007732d0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007732d0
//
// 007732d0  56                   push esi
// 007732d1  6a05                 push 5
// 007732d3  33c9                 xor ecx, ecx
// 007732d5  51                   push ecx
// 007732d6  b8c0b65900           mov eax, 0x59b6c0
// 007732db  50                   push eax
// 007732dc  33f6                 xor esi, esi
// 007732de  56                   push esi
// 007732df  ba80e25500           mov edx, 0x55e280
// 007732e4  52                   push edx
// 007732e5  6830157b00           push 0x7b1530
// 007732ea  6894167b00           push 0x7b1694
// 007732ef  b95c508c00           mov ecx, 0x8c505c
// 007732f4  e8177de2ff           call 0x59b010
// 007732f9  6830af7700           push 0x77af30
// 007732fe  e820daebff           call 0x630d23
// 00773303  83c404               add esp, 4
// 00773306  5e                   pop esi
// 00773307  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_cameraType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
