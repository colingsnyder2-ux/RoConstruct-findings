// roc 2009-06 005ecd40  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ecd40
//
// 005ecd40  64a100000000         mov eax, dword ptr fs:[0]
// 005ecd46  6aff                 push -1
// 005ecd48  687e568600           push 0x86567e
// 005ecd4d  50                   push eax
// 005ecd4e  b801000000           mov eax, 1
// 005ecd53  64892500000000       mov dword ptr fs:[0], esp
// 005ecd5a  8405688ca400         test byte ptr [0xa48c68], al
// 005ecd60  7530                 jne 0x5ecd92
// 005ecd62  0905688ca400         or dword ptr [0xa48c68], eax
// 005ecd68  6870afa100           push 0xa1af70
// 005ecd6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ecd75  e876d7e1ff           call 0x40a4f0
// 005ecd7a  50                   push eax
// 005ecd7b  b9a88ba400           mov ecx, 0xa48ba8
// 005ecd80  e85bca0000           call 0x5f97e0
// 005ecd85  68a0848900           push 0x8984a0
// 005ecd8a  e86ccd1200           call 0x719afb
// 005ecd8f  83c404               add esp, 4
// 005ecd92  8b0c24               mov ecx, dword ptr [esp]
// 005ecd95  b8a88ba400           mov eax, 0xa48ba8
// 005ecd9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ecda1  83c40c               add esp, 0xc
// 005ecda4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
