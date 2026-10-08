// roc 2007-03 00773c80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773c80
//
// 00773c80  56                   push esi
// 00773c81  6a05                 push 5
// 00773c83  33c9                 xor ecx, ecx
// 00773c85  51                   push ecx
// 00773c86  b820085900           mov eax, 0x590820
// 00773c8b  50                   push eax
// 00773c8c  33f6                 xor esi, esi
// 00773c8e  56                   push esi
// 00773c8f  ba70e65800           mov edx, 0x58e670
// 00773c94  52                   push edx
// 00773c95  6810157b00           push 0x7b1510
// 00773c9a  6868197b00           push 0x7b1968
// 00773c9f  b914e78b00           mov ecx, 0x8be714
// 00773ca4  e8b7c6e1ff           call 0x590360
// 00773ca9  6890a87700           push 0x77a890
// 00773cae  e800b5eaff           call 0x61f1b3
// 00773cb3  83c404               add esp, 4
// 00773cb6  5e                   pop esi
// 00773cb7  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__EcameraSubjectProp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
