// roc 2009-06 005ec010  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec010
//
// 005ec010  64a100000000         mov eax, dword ptr fs:[0]
// 005ec016  6aff                 push -1
// 005ec018  681e548600           push 0x86541e
// 005ec01d  50                   push eax
// 005ec01e  b801000000           mov eax, 1
// 005ec023  64892500000000       mov dword ptr fs:[0], esp
// 005ec02a  8405907da400         test byte ptr [0xa47d90], al
// 005ec030  7530                 jne 0x5ec062
// 005ec032  0905907da400         or dword ptr [0xa47d90], eax
// 005ec038  684c0aa200           push 0xa20a4c
// 005ec03d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec045  e8a6e4e1ff           call 0x40a4f0
// 005ec04a  50                   push eax
// 005ec04b  b9d07ca400           mov ecx, 0xa47cd0
// 005ec050  e88bd70000           call 0x5f97e0
// 005ec055  68d0858900           push 0x8985d0
// 005ec05a  e89cda1200           call 0x719afb
// 005ec05f  83c404               add esp, 4
// 005ec062  8b0c24               mov ecx, dword ptr [esp]
// 005ec065  b8d07ca400           mov eax, 0xa47cd0
// 005ec06a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec071  83c40c               add esp, 0xc
// 005ec074  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
