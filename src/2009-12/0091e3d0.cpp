// roc 2009-12 0091e3d0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0091e3d0
//
// 0091e3d0  55                   push ebp
// 0091e3d1  8bec                 mov ebp, esp
// 0091e3d3  6aff                 push -1
// 0091e3d5  68187c9600           push 0x967c18
// 0091e3da  64a100000000         mov eax, dword ptr fs:[0]
// 0091e3e0  50                   push eax
// 0091e3e1  64892500000000       mov dword ptr fs:[0], esp
// 0091e3e8  83ec20               sub esp, 0x20
// 0091e3eb  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 0091e3ee  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0091e3f5  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0091e3f8  e8832d0000           call 0x921180
// 0091e3fd  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 0091e400  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0091e403  894de0               mov dword ptr [ebp - 0x20], ecx
// 0091e406  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0091e409  8b4214               mov eax, dword ptr [edx + 0x14]
// 0091e40c  8945dc               mov dword ptr [ebp - 0x24], eax
// 0091e40f  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0091e412  51                   push ecx
// 0091e413  e84254edff           call 0x7f385a
// 0091e418  83c404               add esp, 4
// 0091e41b  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0091e41e  c7421400000000       mov dword ptr [edx + 0x14], 0
// 0091e425  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0091e42c  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 0091e42f  8b08                 mov ecx, dword ptr [eax]
// 0091e431  894dd8               mov dword ptr [ebp - 0x28], ecx
// 0091e434  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 0091e437  52                   push edx
// 0091e438  e81d54edff           call 0x7f385a
// 0091e43d  83c404               add esp, 4
// 0091e440  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0091e443  64890d00000000       mov dword ptr fs:[0], ecx
// 0091e44a  8be5                 mov esp, ebp
// 0091e44c  5d                   pop ebp
// 0091e44d  c3                   ret 
// copied from an identical function in another client (function ??1?$list@PAVAnimationState@Ogre@@V?$allocator@PAVAnimationState@Ogre@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp