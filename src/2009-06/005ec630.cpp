// roc 2009-06 005ec630  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec630
//
// 005ec630  64a100000000         mov eax, dword ptr fs:[0]
// 005ec636  6aff                 push -1
// 005ec638  68de558600           push 0x8655de
// 005ec63d  50                   push eax
// 005ec63e  b801000000           mov eax, 1
// 005ec643  64892500000000       mov dword ptr fs:[0], esp
// 005ec64a  84058088a400         test byte ptr [0xa48880], al
// 005ec650  7530                 jne 0x5ec682
// 005ec652  09058088a400         or dword ptr [0xa48880], eax
// 005ec658  68e4bba000           push 0xa0bbe4
// 005ec65d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec665  e856ffffff           call 0x5ec5c0
// 005ec66a  50                   push eax
// 005ec66b  b9c087a400           mov ecx, 0xa487c0
// 005ec670  e86bd10000           call 0x5f97e0
// 005ec675  68f0848900           push 0x8984f0
// 005ec67a  e87cd41200           call 0x719afb
// 005ec67f  83c404               add esp, 4
// 005ec682  8b0c24               mov ecx, dword ptr [esp]
// 005ec685  b8c087a400           mov eax, 0xa487c0
// 005ec68a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec691  83c40c               add esp, 0xc
// 005ec694  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
