// roc 2007-03 00773bc0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773bc0
//
// 00773bc0  56                   push esi
// 00773bc1  6a05                 push 5
// 00773bc3  33c9                 xor ecx, ecx
// 00773bc5  51                   push ecx
// 00773bc6  b8e0075900           mov eax, 0x5907e0
// 00773bcb  50                   push eax
// 00773bcc  33f6                 xor esi, esi
// 00773bce  56                   push esi
// 00773bcf  ba50fd5500           mov edx, 0x55fd50
// 00773bd4  52                   push edx
// 00773bd5  6810157b00           push 0x7b1510
// 00773bda  6868167b00           push 0x7b1668
// 00773bdf  b934e78b00           mov ecx, 0x8be734
// 00773be4  e827c5e1ff           call 0x590110
// 00773be9  68b0a87700           push 0x77a8b0
// 00773bee  e8c0b5eaff           call 0x61f1b3
// 00773bf3  83c404               add esp, 4
// 00773bf6  5e                   pop esi
// 00773bf7  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__Edesc_cameraType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
