// roc 2009-06 005eb1a0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb1a0
//
// 005eb1a0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb1a6  6aff                 push -1
// 005eb1a8  68fe4f8600           push 0x864ffe
// 005eb1ad  50                   push eax
// 005eb1ae  b801000000           mov eax, 1
// 005eb1b3  64892500000000       mov dword ptr fs:[0], esp
// 005eb1ba  8405c863a400         test byte ptr [0xa463c8], al
// 005eb1c0  7530                 jne 0x5eb1f2
// 005eb1c2  0905c863a400         or dword ptr [0xa463c8], eax
// 005eb1c8  68904b8e00           push 0x8e4b90
// 005eb1cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb1d5  e876feffff           call 0x5eb050
// 005eb1da  50                   push eax
// 005eb1db  b90863a400           mov ecx, 0xa46308
// 005eb1e0  e8fbe50000           call 0x5f97e0
// 005eb1e5  68e0878900           push 0x8987e0
// 005eb1ea  e80ce91200           call 0x719afb
// 005eb1ef  83c404               add esp, 4
// 005eb1f2  8b0c24               mov ecx, dword ptr [esp]
// 005eb1f5  b80863a400           mov eax, 0xa46308
// 005eb1fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb201  83c40c               add esp, 0xc
// 005eb204  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
