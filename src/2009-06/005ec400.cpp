// roc 2009-06 005ec400  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec400
//
// 005ec400  64a100000000         mov eax, dword ptr fs:[0]
// 005ec406  6aff                 push -1
// 005ec408  683e558600           push 0x86553e
// 005ec40d  50                   push eax
// 005ec40e  b801000000           mov eax, 1
// 005ec413  64892500000000       mov dword ptr fs:[0], esp
// 005ec41a  84059884a400         test byte ptr [0xa48498], al
// 005ec420  7530                 jne 0x5ec452
// 005ec422  09059884a400         or dword ptr [0xa48498], eax
// 005ec428  68e821a100           push 0xa121e8
// 005ec42d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec435  e8b6e0e1ff           call 0x40a4f0
// 005ec43a  50                   push eax
// 005ec43b  b9d883a400           mov ecx, 0xa483d8
// 005ec440  e89bd30000           call 0x5f97e0
// 005ec445  6840858900           push 0x898540
// 005ec44a  e8acd61200           call 0x719afb
// 005ec44f  83c404               add esp, 4
// 005ec452  8b0c24               mov ecx, dword ptr [esp]
// 005ec455  b8d883a400           mov eax, 0xa483d8
// 005ec45a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec461  83c40c               add esp, 0xc
// 005ec464  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
