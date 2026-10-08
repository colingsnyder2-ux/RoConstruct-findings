// roc 2007-08 00773390  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773390
//
// 00773390  56                   push esi
// 00773391  6a05                 push 5
// 00773393  33c9                 xor ecx, ecx
// 00773395  51                   push ecx
// 00773396  b800b75900           mov eax, 0x59b700
// 0077339b  50                   push eax
// 0077339c  33f6                 xor esi, esi
// 0077339e  56                   push esi
// 0077339f  ba90995900           mov edx, 0x599990
// 007733a4  52                   push edx
// 007733a5  6830157b00           push 0x7b1530
// 007733aa  6884197b00           push 0x7b1984
// 007733af  b93c508c00           mov ecx, 0x8c503c
// 007733b4  e8a77ee2ff           call 0x59b260
// 007733b9  6810af7700           push 0x77af10
// 007733be  e860d9ebff           call 0x630d23
// 007733c3  83c404               add esp, 4
// 007733c6  5e                   pop esi
// 007733c7  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??__EcameraSubjectProp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
