// roc 2009-06 005ea560  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea560
//
// 005ea560  64a100000000         mov eax, dword ptr fs:[0]
// 005ea566  6aff                 push -1
// 005ea568  687e4c8600           push 0x864c7e
// 005ea56d  50                   push eax
// 005ea56e  b801000000           mov eax, 1
// 005ea573  64892500000000       mov dword ptr fs:[0], esp
// 005ea57a  8405e84da400         test byte ptr [0xa44de8], al
// 005ea580  7530                 jne 0x5ea5b2
// 005ea582  0905e84da400         or dword ptr [0xa44de8], eax
// 005ea588  683c9a8d00           push 0x8d9a3c
// 005ea58d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea595  e856ffe1ff           call 0x40a4f0
// 005ea59a  50                   push eax
// 005ea59b  b9284da400           mov ecx, 0xa44d28
// 005ea5a0  e83bf20000           call 0x5f97e0
// 005ea5a5  68a0898900           push 0x8989a0
// 005ea5aa  e84cf51200           call 0x719afb
// 005ea5af  83c404               add esp, 4
// 005ea5b2  8b0c24               mov ecx, dword ptr [esp]
// 005ea5b5  b8284da400           mov eax, 0xa44d28
// 005ea5ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea5c1  83c40c               add esp, 0xc
// 005ea5c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
