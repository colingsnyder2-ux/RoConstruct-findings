// roc 2009-06 005eb4b0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb4b0
//
// 005eb4b0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb4b6  6aff                 push -1
// 005eb4b8  68de508600           push 0x8650de
// 005eb4bd  50                   push eax
// 005eb4be  b801000000           mov eax, 1
// 005eb4c3  64892500000000       mov dword ptr fs:[0], esp
// 005eb4ca  84054069a400         test byte ptr [0xa46940], al
// 005eb4d0  7530                 jne 0x5eb502
// 005eb4d2  09054069a400         or dword ptr [0xa46940], eax
// 005eb4d8  68607f8e00           push 0x8e7f60
// 005eb4dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb4e5  e856ffffff           call 0x5eb440
// 005eb4ea  50                   push eax
// 005eb4eb  b98068a400           mov ecx, 0xa46880
// 005eb4f0  e8ebe20000           call 0x5f97e0
// 005eb4f5  6870878900           push 0x898770
// 005eb4fa  e8fce51200           call 0x719afb
// 005eb4ff  83c404               add esp, 4
// 005eb502  8b0c24               mov ecx, dword ptr [esp]
// 005eb505  b88068a400           mov eax, 0xa46880
// 005eb50a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb511  83c40c               add esp, 0xc
// 005eb514  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
