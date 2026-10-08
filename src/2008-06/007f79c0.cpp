// roc 2008-06 007f79c0  unit: seg_007f0000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f79c0
//
// 007f79c0  56                   push esi
// 007f79c1  33f6                 xor esi, esi
// 007f79c3  56                   push esi
// 007f79c4  83ec0c               sub esp, 0xc
// 007f79c7  8bc4                 mov eax, esp
// 007f79c9  56                   push esi
// 007f79ca  b950916000           mov ecx, 0x609150
// 007f79cf  8908                 mov dword ptr [eax], ecx
// 007f79d1  33d2                 xor edx, edx
// 007f79d3  6890248200           push 0x822490
// 007f79d8  895004               mov dword ptr [eax + 4], edx
// 007f79db  682c2b8300           push 0x832b2c
// 007f79e0  b9b8b99700           mov ecx, 0x97b9b8
// 007f79e5  897008               mov dword ptr [eax + 8], esi
// 007f79e8  e8231ae1ff           call 0x609410
// 007f79ed  6890018000           push 0x800190
// 007f79f2  e8b89deaff           call 0x6a17af
// 007f79f7  83c404               add esp, 4
// 007f79fa  5e                   pop esi
// 007f79fb  c3                   ret 
// library rbxgs/v8datamodel\PVInstance.cpp (function ??__Edesc_CoordFrame@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
