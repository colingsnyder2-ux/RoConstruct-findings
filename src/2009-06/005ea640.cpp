// roc 2009-06 005ea640  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ea640
//
// 005ea640  64a100000000         mov eax, dword ptr fs:[0]
// 005ea646  6aff                 push -1
// 005ea648  68be4c8600           push 0x864cbe
// 005ea64d  50                   push eax
// 005ea64e  b801000000           mov eax, 1
// 005ea653  64892500000000       mov dword ptr fs:[0], esp
// 005ea65a  8405784fa400         test byte ptr [0xa44f78], al
// 005ea660  7530                 jne 0x5ea692
// 005ea662  0905784fa400         or dword ptr [0xa44f78], eax
// 005ea668  68509a8d00           push 0x8d9a50
// 005ea66d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ea675  e876fee1ff           call 0x40a4f0
// 005ea67a  50                   push eax
// 005ea67b  b9b84ea400           mov ecx, 0xa44eb8
// 005ea680  e85bf10000           call 0x5f97e0
// 005ea685  6880898900           push 0x898980
// 005ea68a  e86cf41200           call 0x719afb
// 005ea68f  83c404               add esp, 4
// 005ea692  8b0c24               mov ecx, dword ptr [esp]
// 005ea695  b8b84ea400           mov eax, 0xa44eb8
// 005ea69a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea6a1  83c40c               add esp, 0xc
// 005ea6a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
