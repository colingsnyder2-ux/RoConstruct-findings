// roc 2009-06 005ec550  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec550
//
// 005ec550  64a100000000         mov eax, dword ptr fs:[0]
// 005ec556  6aff                 push -1
// 005ec558  689e558600           push 0x86559e
// 005ec55d  50                   push eax
// 005ec55e  b801000000           mov eax, 1
// 005ec563  64892500000000       mov dword ptr fs:[0], esp
// 005ec56a  8405f086a400         test byte ptr [0xa486f0], al
// 005ec570  7530                 jne 0x5ec5a2
// 005ec572  0905f086a400         or dword ptr [0xa486f0], eax
// 005ec578  684400a100           push 0xa10044
// 005ec57d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec585  e866dfe1ff           call 0x40a4f0
// 005ec58a  50                   push eax
// 005ec58b  b93086a400           mov ecx, 0xa48630
// 005ec590  e84bd20000           call 0x5f97e0
// 005ec595  6810858900           push 0x898510
// 005ec59a  e85cd51200           call 0x719afb
// 005ec59f  83c404               add esp, 4
// 005ec5a2  8b0c24               mov ecx, dword ptr [esp]
// 005ec5a5  b83086a400           mov eax, 0xa48630
// 005ec5aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec5b1  83c40c               add esp, 0xc
// 005ec5b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
