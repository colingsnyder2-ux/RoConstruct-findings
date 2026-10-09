// roc 2009-06 005eb750  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb750
//
// 005eb750  64a100000000         mov eax, dword ptr fs:[0]
// 005eb756  6aff                 push -1
// 005eb758  689e518600           push 0x86519e
// 005eb75d  50                   push eax
// 005eb75e  b801000000           mov eax, 1
// 005eb763  64892500000000       mov dword ptr fs:[0], esp
// 005eb76a  8405f06da400         test byte ptr [0xa46df0], al
// 005eb770  7530                 jne 0x5eb7a2
// 005eb772  0905f06da400         or dword ptr [0xa46df0], eax
// 005eb778  68d4fda100           push 0xa1fdd4
// 005eb77d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb785  e856f1ffff           call 0x5ea8e0
// 005eb78a  50                   push eax
// 005eb78b  b9306da400           mov ecx, 0xa46d30
// 005eb790  e84be00000           call 0x5f97e0
// 005eb795  6810878900           push 0x898710
// 005eb79a  e85ce31200           call 0x719afb
// 005eb79f  83c404               add esp, 4
// 005eb7a2  8b0c24               mov ecx, dword ptr [esp]
// 005eb7a5  b8306da400           mov eax, 0xa46d30
// 005eb7aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb7b1  83c40c               add esp, 0xc
// 005eb7b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
