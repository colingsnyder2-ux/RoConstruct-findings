// roc 2009-06 005ec0f0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ec0f0
//
// 005ec0f0  64a100000000         mov eax, dword ptr fs:[0]
// 005ec0f6  6aff                 push -1
// 005ec0f8  685e548600           push 0x86545e
// 005ec0fd  50                   push eax
// 005ec0fe  b801000000           mov eax, 1
// 005ec103  64892500000000       mov dword ptr fs:[0], esp
// 005ec10a  8405207fa400         test byte ptr [0xa47f20], al
// 005ec110  7530                 jne 0x5ec142
// 005ec112  0905207fa400         or dword ptr [0xa47f20], eax
// 005ec118  68e8388e00           push 0x8e38e8
// 005ec11d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ec125  e8c6e3e1ff           call 0x40a4f0
// 005ec12a  50                   push eax
// 005ec12b  b9607ea400           mov ecx, 0xa47e60
// 005ec130  e8abd60000           call 0x5f97e0
// 005ec135  68b0858900           push 0x8985b0
// 005ec13a  e8bcd91200           call 0x719afb
// 005ec13f  83c404               add esp, 4
// 005ec142  8b0c24               mov ecx, dword ptr [esp]
// 005ec145  b8607ea400           mov eax, 0xa47e60
// 005ec14a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec151  83c40c               add esp, 0xc
// 005ec154  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
