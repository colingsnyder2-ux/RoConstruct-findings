// roc 2008-06 007f7600  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7600
//
// 007f7600  56                   push esi
// 007f7601  6a05                 push 5
// 007f7603  33c9                 xor ecx, ecx
// 007f7605  51                   push ecx
// 007f7606  b870f75e00           mov eax, 0x5ef770
// 007f760b  50                   push eax
// 007f760c  33f6                 xor esi, esi
// 007f760e  56                   push esi
// 007f760f  ba309a6000           mov edx, 0x609a30
// 007f7614  52                   push edx
// 007f7615  6890248200           push 0x822490
// 007f761a  68bc078400           push 0x8407bc
// 007f761f  b97cb59700           mov ecx, 0x97b57c
// 007f7624  e86780dfff           call 0x5ef690
// 007f7629  6810ff7f00           push 0x7fff10
// 007f762e  e87ca1eaff           call 0x6a17af
// 007f7633  83c404               add esp, 4
// 007f7636  5e                   pop esi
// 007f7637  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??__E?prop_Face@FaceInstance@RBX@@2V?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
