// roc 2009-06 005ec5c0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec5c0
//
// 005ec5c0  64a100000000         mov eax, dword ptr fs:[0]
// 005ec5c6  6aff                 push -1
// 005ec5c8  68be558600           push 0x8655be
// 005ec5cd  50                   push eax
// 005ec5ce  b801000000           mov eax, 1
// 005ec5d3  64892500000000       mov dword ptr fs:[0], esp
// 005ec5da  8405b887a400         test byte ptr [0xa487b8], al
// 005ec5e0  7530                 jne 0x5ec612
// 005ec5e2  0905b887a400         or dword ptr [0xa487b8], eax
// 005ec5e8  68eca0a000           push 0xa0a0ec
// 005ec5ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec5f5  e886e5ffff           call 0x5eab80
// 005ec5fa  50                   push eax
// 005ec5fb  b9f886a400           mov ecx, 0xa486f8
// 005ec600  e8dbd10000           call 0x5f97e0
// 005ec605  6800858900           push 0x898500
// 005ec60a  e8ecd41200           call 0x719afb
// 005ec60f  83c404               add esp, 4
// 005ec612  8b0c24               mov ecx, dword ptr [esp]
// 005ec615  b8f886a400           mov eax, 0xa486f8
// 005ec61a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec621  83c40c               add esp, 0xc
// 005ec624  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
