// roc 2009-06 005ebd70  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ebd70
//
// 005ebd70  64a100000000         mov eax, dword ptr fs:[0]
// 005ebd76  6aff                 push -1
// 005ebd78  685e538600           push 0x86535e
// 005ebd7d  50                   push eax
// 005ebd7e  b801000000           mov eax, 1
// 005ebd83  64892500000000       mov dword ptr fs:[0], esp
// 005ebd8a  8405e078a400         test byte ptr [0xa478e0], al
// 005ebd90  7530                 jne 0x5ebdc2
// 005ebd92  0905e078a400         or dword ptr [0xa478e0], eax
// 005ebd98  6804908e00           push 0x8e9004
// 005ebd9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ebda5  e846e7e1ff           call 0x40a4f0
// 005ebdaa  50                   push eax
// 005ebdab  b92078a400           mov ecx, 0xa47820
// 005ebdb0  e82bda0000           call 0x5f97e0
// 005ebdb5  6830868900           push 0x898630
// 005ebdba  e83cdd1200           call 0x719afb
// 005ebdbf  83c404               add esp, 4
// 005ebdc2  8b0c24               mov ecx, dword ptr [esp]
// 005ebdc5  b82078a400           mov eax, 0xa47820
// 005ebdca  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebdd1  83c40c               add esp, 0xc
// 005ebdd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
