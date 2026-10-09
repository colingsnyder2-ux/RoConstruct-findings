// roc 2009-06 005ec710  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec710
//
// 005ec710  64a100000000         mov eax, dword ptr fs:[0]
// 005ec716  6aff                 push -1
// 005ec718  681e568600           push 0x86561e
// 005ec71d  50                   push eax
// 005ec71e  b801000000           mov eax, 1
// 005ec723  64892500000000       mov dword ptr fs:[0], esp
// 005ec72a  8405108aa400         test byte ptr [0xa48a10], al
// 005ec730  7530                 jne 0x5ec762
// 005ec732  0905108aa400         or dword ptr [0xa48a10], eax
// 005ec738  689cc9a000           push 0xa0c99c
// 005ec73d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec745  e8a6dde1ff           call 0x40a4f0
// 005ec74a  50                   push eax
// 005ec74b  b95089a400           mov ecx, 0xa48950
// 005ec750  e88bd00000           call 0x5f97e0
// 005ec755  68d0848900           push 0x8984d0
// 005ec75a  e89cd31200           call 0x719afb
// 005ec75f  83c404               add esp, 4
// 005ec762  8b0c24               mov ecx, dword ptr [esp]
// 005ec765  b85089a400           mov eax, 0xa48950
// 005ec76a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec771  83c40c               add esp, 0xc
// 005ec774  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
