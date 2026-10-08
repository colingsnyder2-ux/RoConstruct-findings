// roc 2007-08 00774a00  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774a00
//
// 00774a00  56                   push esi
// 00774a01  6a05                 push 5
// 00774a03  33c9                 xor ecx, ecx
// 00774a05  51                   push ecx
// 00774a06  b8d08e5b00           mov eax, 0x5b8ed0
// 00774a0b  50                   push eax
// 00774a0c  33f6                 xor esi, esi
// 00774a0e  56                   push esi
// 00774a0f  ba703f5500           mov edx, 0x553f70
// 00774a14  52                   push edx
// 00774a15  6898b67900           push 0x79b698
// 00774a1a  68248d7b00           push 0x7b8d24
// 00774a1f  b9a0658c00           mov ecx, 0x8c65a0
// 00774a24  e83745e4ff           call 0x5b8f60
// 00774a29  68c0bb7700           push 0x77bbc0
// 00774a2e  e8f0c2ebff           call 0x630d23
// 00774a33  83c404               add esp, 4
// 00774a36  5e                   pop esi
// 00774a37  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??__E?prop_Face@FaceInstance@RBX@@2V?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
