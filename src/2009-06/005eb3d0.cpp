// roc 2009-06 005eb3d0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb3d0
//
// 005eb3d0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb3d6  6aff                 push -1
// 005eb3d8  689e508600           push 0x86509e
// 005eb3dd  50                   push eax
// 005eb3de  b801000000           mov eax, 1
// 005eb3e3  64892500000000       mov dword ptr fs:[0], esp
// 005eb3ea  8405b067a400         test byte ptr [0xa467b0], al
// 005eb3f0  7530                 jne 0x5eb422
// 005eb3f2  0905b067a400         or dword ptr [0xa467b0], eax
// 005eb3f8  68c04b8e00           push 0x8e4bc0
// 005eb3fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb405  e846fcffff           call 0x5eb050
// 005eb40a  50                   push eax
// 005eb40b  b9f066a400           mov ecx, 0xa466f0
// 005eb410  e8cbe30000           call 0x5f97e0
// 005eb415  6890878900           push 0x898790
// 005eb41a  e8dce61200           call 0x719afb
// 005eb41f  83c404               add esp, 4
// 005eb422  8b0c24               mov ecx, dword ptr [esp]
// 005eb425  b8f066a400           mov eax, 0xa466f0
// 005eb42a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb431  83c40c               add esp, 0xc
// 005eb434  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
