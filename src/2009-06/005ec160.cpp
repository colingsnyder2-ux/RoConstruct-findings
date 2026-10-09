// roc 2009-06 005ec160  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec160
//
// 005ec160  64a100000000         mov eax, dword ptr fs:[0]
// 005ec166  6aff                 push -1
// 005ec168  687e548600           push 0x86547e
// 005ec16d  50                   push eax
// 005ec16e  b801000000           mov eax, 1
// 005ec173  64892500000000       mov dword ptr fs:[0], esp
// 005ec17a  8405e87fa400         test byte ptr [0xa47fe8], al
// 005ec180  7530                 jne 0x5ec1b2
// 005ec182  0905e87fa400         or dword ptr [0xa47fe8], eax
// 005ec188  68bc66a100           push 0xa166bc
// 005ec18d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec195  e866f4ffff           call 0x5eb600
// 005ec19a  50                   push eax
// 005ec19b  b9287fa400           mov ecx, 0xa47f28
// 005ec1a0  e83bd60000           call 0x5f97e0
// 005ec1a5  68a0858900           push 0x8985a0
// 005ec1aa  e84cd91200           call 0x719afb
// 005ec1af  83c404               add esp, 4
// 005ec1b2  8b0c24               mov ecx, dword ptr [esp]
// 005ec1b5  b8287fa400           mov eax, 0xa47f28
// 005ec1ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec1c1  83c40c               add esp, 0xc
// 005ec1c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
