// roc 2009-06 005ec390  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec390
//
// 005ec390  64a100000000         mov eax, dword ptr fs:[0]
// 005ec396  6aff                 push -1
// 005ec398  681e558600           push 0x86551e
// 005ec39d  50                   push eax
// 005ec39e  b801000000           mov eax, 1
// 005ec3a3  64892500000000       mov dword ptr fs:[0], esp
// 005ec3aa  8405d083a400         test byte ptr [0xa483d0], al
// 005ec3b0  7530                 jne 0x5ec3e2
// 005ec3b2  0905d083a400         or dword ptr [0xa483d0], eax
// 005ec3b8  68d421a100           push 0xa121d4
// 005ec3bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec3c5  e826e1e1ff           call 0x40a4f0
// 005ec3ca  50                   push eax
// 005ec3cb  b91083a400           mov ecx, 0xa48310
// 005ec3d0  e80bd40000           call 0x5f97e0
// 005ec3d5  6850858900           push 0x898550
// 005ec3da  e81cd71200           call 0x719afb
// 005ec3df  83c404               add esp, 4
// 005ec3e2  8b0c24               mov ecx, dword ptr [esp]
// 005ec3e5  b81083a400           mov eax, 0xa48310
// 005ec3ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec3f1  83c40c               add esp, 0xc
// 005ec3f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
