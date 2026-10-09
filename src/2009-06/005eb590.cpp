// roc 2009-06 005eb590  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb590
//
// 005eb590  64a100000000         mov eax, dword ptr fs:[0]
// 005eb596  6aff                 push -1
// 005eb598  681e518600           push 0x86511e
// 005eb59d  50                   push eax
// 005eb59e  b801000000           mov eax, 1
// 005eb5a3  64892500000000       mov dword ptr fs:[0], esp
// 005eb5aa  8405d06aa400         test byte ptr [0xa46ad0], al
// 005eb5b0  7530                 jne 0x5eb5e2
// 005eb5b2  0905d06aa400         or dword ptr [0xa46ad0], eax
// 005eb5b8  68707f8e00           push 0x8e7f70
// 005eb5bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb5c5  e886faffff           call 0x5eb050
// 005eb5ca  50                   push eax
// 005eb5cb  b9106aa400           mov ecx, 0xa46a10
// 005eb5d0  e80be20000           call 0x5f97e0
// 005eb5d5  6850878900           push 0x898750
// 005eb5da  e81ce51200           call 0x719afb
// 005eb5df  83c404               add esp, 4
// 005eb5e2  8b0c24               mov ecx, dword ptr [esp]
// 005eb5e5  b8106aa400           mov eax, 0xa46a10
// 005eb5ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb5f1  83c40c               add esp, 0xc
// 005eb5f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
