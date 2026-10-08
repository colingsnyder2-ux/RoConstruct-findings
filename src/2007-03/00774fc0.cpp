// roc 2007-03 00774fc0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774fc0
//
// 00774fc0  56                   push esi
// 00774fc1  6a05                 push 5
// 00774fc3  33c9                 xor ecx, ecx
// 00774fc5  51                   push ecx
// 00774fc6  b8d03a5b00           mov eax, 0x5b3ad0
// 00774fcb  50                   push eax
// 00774fcc  33f6                 xor esi, esi
// 00774fce  56                   push esi
// 00774fcf  ba80424c00           mov edx, 0x4c4280
// 00774fd4  52                   push edx
// 00774fd5  6870a77900           push 0x79a770
// 00774fda  68008d7b00           push 0x7b8d00
// 00774fdf  b9e0fc8b00           mov ecx, 0x8bfce0
// 00774fe4  e877ebe3ff           call 0x5b3b60
// 00774fe9  68c0b47700           push 0x77b4c0
// 00774fee  e8c0a1eaff           call 0x61f1b3
// 00774ff3  83c404               add esp, 4
// 00774ff6  5e                   pop esi
// 00774ff7  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??__E?prop_Face@FaceInstance@RBX@@2V?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
