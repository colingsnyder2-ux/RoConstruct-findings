// roc 2009-06 005ec080  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec080
//
// 005ec080  64a100000000         mov eax, dword ptr fs:[0]
// 005ec086  6aff                 push -1
// 005ec088  683e548600           push 0x86543e
// 005ec08d  50                   push eax
// 005ec08e  b801000000           mov eax, 1
// 005ec093  64892500000000       mov dword ptr fs:[0], esp
// 005ec09a  8405587ea400         test byte ptr [0xa47e58], al
// 005ec0a0  7530                 jne 0x5ec0d2
// 005ec0a2  0905587ea400         or dword ptr [0xa47e58], eax
// 005ec0a8  68dc6ba100           push 0xa16bdc
// 005ec0ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec0b5  e826e8ffff           call 0x5ea8e0
// 005ec0ba  50                   push eax
// 005ec0bb  b9987da400           mov ecx, 0xa47d98
// 005ec0c0  e81bd70000           call 0x5f97e0
// 005ec0c5  68c0858900           push 0x8985c0
// 005ec0ca  e82cda1200           call 0x719afb
// 005ec0cf  83c404               add esp, 4
// 005ec0d2  8b0c24               mov ecx, dword ptr [esp]
// 005ec0d5  b8987da400           mov eax, 0xa47d98
// 005ec0da  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec0e1  83c40c               add esp, 0xc
// 005ec0e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
