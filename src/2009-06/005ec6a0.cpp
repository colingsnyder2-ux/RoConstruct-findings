// roc 2009-06 005ec6a0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec6a0
//
// 005ec6a0  64a100000000         mov eax, dword ptr fs:[0]
// 005ec6a6  6aff                 push -1
// 005ec6a8  68fe558600           push 0x8655fe
// 005ec6ad  50                   push eax
// 005ec6ae  b801000000           mov eax, 1
// 005ec6b3  64892500000000       mov dword ptr fs:[0], esp
// 005ec6ba  84054889a400         test byte ptr [0xa48948], al
// 005ec6c0  7530                 jne 0x5ec6f2
// 005ec6c2  09054889a400         or dword ptr [0xa48948], eax
// 005ec6c8  681052a100           push 0xa15210
// 005ec6cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec6d5  e816dee1ff           call 0x40a4f0
// 005ec6da  50                   push eax
// 005ec6db  b98888a400           mov ecx, 0xa48888
// 005ec6e0  e8fbd00000           call 0x5f97e0
// 005ec6e5  68e0848900           push 0x8984e0
// 005ec6ea  e80cd41200           call 0x719afb
// 005ec6ef  83c404               add esp, 4
// 005ec6f2  8b0c24               mov ecx, dword ptr [esp]
// 005ec6f5  b88888a400           mov eax, 0xa48888
// 005ec6fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec701  83c40c               add esp, 0xc
// 005ec704  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
