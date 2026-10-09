// roc 2009-06 005eb210  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb210
//
// 005eb210  64a100000000         mov eax, dword ptr fs:[0]
// 005eb216  6aff                 push -1
// 005eb218  681e508600           push 0x86501e
// 005eb21d  50                   push eax
// 005eb21e  b801000000           mov eax, 1
// 005eb223  64892500000000       mov dword ptr fs:[0], esp
// 005eb22a  84059064a400         test byte ptr [0xa46490], al
// 005eb230  7530                 jne 0x5eb262
// 005eb232  09059064a400         or dword ptr [0xa46490], eax
// 005eb238  68984b8e00           push 0x8e4b98
// 005eb23d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb245  e806feffff           call 0x5eb050
// 005eb24a  50                   push eax
// 005eb24b  b9d063a400           mov ecx, 0xa463d0
// 005eb250  e88be50000           call 0x5f97e0
// 005eb255  68d0878900           push 0x8987d0
// 005eb25a  e89ce81200           call 0x719afb
// 005eb25f  83c404               add esp, 4
// 005eb262  8b0c24               mov ecx, dword ptr [esp]
// 005eb265  b8d063a400           mov eax, 0xa463d0
// 005eb26a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb271  83c40c               add esp, 0xc
// 005eb274  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
