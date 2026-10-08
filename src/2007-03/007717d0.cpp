// roc 2007-03 007717d0  unit: seg_00770000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007717d0
//
// 007717d0  56                   push esi
// 007717d1  6a01                 push 1
// 007717d3  6818567a00           push 0x7a5618
// 007717d8  6810567a00           push 0x7a5610
// 007717dd  83ec0c               sub esp, 0xc
// 007717e0  8bc4                 mov eax, esp
// 007717e2  b9d05b5b00           mov ecx, 0x5b5bd0
// 007717e7  8908                 mov dword ptr [eax], ecx
// 007717e9  33d2                 xor edx, edx
// 007717eb  33f6                 xor esi, esi
// 007717ed  895004               mov dword ptr [eax + 4], edx
// 007717f0  b958b48b00           mov ecx, 0x8bb458
// 007717f5  897008               mov dword ptr [eax + 8], esi
// 007717f8  e88348dcff           call 0x536080
// 007717fd  68a0947700           push 0x7794a0
// 00771802  e8acd9eaff           call 0x61f1b3
// 00771807  83c404               add esp, 4
// 0077180a  5e                   pop esi
// 0077180b  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??__Emodel_moveFunctionOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
