// roc 2009-06 005eaa30  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eaa30
//
// 005eaa30  64a100000000         mov eax, dword ptr fs:[0]
// 005eaa36  6aff                 push -1
// 005eaa38  68de4d8600           push 0x864dde
// 005eaa3d  50                   push eax
// 005eaa3e  b801000000           mov eax, 1
// 005eaa43  64892500000000       mov dword ptr fs:[0], esp
// 005eaa4a  84058056a400         test byte ptr [0xa45680], al
// 005eaa50  7530                 jne 0x5eaa82
// 005eaa52  09058056a400         or dword ptr [0xa45680], eax
// 005eaa58  68a83d8e00           push 0x8e3da8
// 005eaa5d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eaa65  e886fae1ff           call 0x40a4f0
// 005eaa6a  50                   push eax
// 005eaa6b  b9c055a400           mov ecx, 0xa455c0
// 005eaa70  e86bed0000           call 0x5f97e0
// 005eaa75  68f0888900           push 0x8988f0
// 005eaa7a  e87cf01200           call 0x719afb
// 005eaa7f  83c404               add esp, 4
// 005eaa82  8b0c24               mov ecx, dword ptr [esp]
// 005eaa85  b8c055a400           mov eax, 0xa455c0
// 005eaa8a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eaa91  83c40c               add esp, 0xc
// 005eaa94  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
