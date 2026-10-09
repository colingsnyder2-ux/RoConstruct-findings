// roc 2009-06 005ec470  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec470
//
// 005ec470  64a100000000         mov eax, dword ptr fs:[0]
// 005ec476  6aff                 push -1
// 005ec478  685e558600           push 0x86555e
// 005ec47d  50                   push eax
// 005ec47e  b801000000           mov eax, 1
// 005ec483  64892500000000       mov dword ptr fs:[0], esp
// 005ec48a  84056085a400         test byte ptr [0xa48560], al
// 005ec490  7530                 jne 0x5ec4c2
// 005ec492  09056085a400         or dword ptr [0xa48560], eax
// 005ec498  68ccafa100           push 0xa1afcc
// 005ec49d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec4a5  e846e0e1ff           call 0x40a4f0
// 005ec4aa  50                   push eax
// 005ec4ab  b9a084a400           mov ecx, 0xa484a0
// 005ec4b0  e82bd30000           call 0x5f97e0
// 005ec4b5  6830858900           push 0x898530
// 005ec4ba  e83cd61200           call 0x719afb
// 005ec4bf  83c404               add esp, 4
// 005ec4c2  8b0c24               mov ecx, dword ptr [esp]
// 005ec4c5  b8a084a400           mov eax, 0xa484a0
// 005ec4ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec4d1  83c40c               add esp, 0xc
// 005ec4d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
