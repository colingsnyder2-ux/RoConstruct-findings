// roc 2009-06 005ecdb0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ecdb0
//
// 005ecdb0  64a100000000         mov eax, dword ptr fs:[0]
// 005ecdb6  6aff                 push -1
// 005ecdb8  689e568600           push 0x86569e
// 005ecdbd  50                   push eax
// 005ecdbe  b801000000           mov eax, 1
// 005ecdc3  64892500000000       mov dword ptr fs:[0], esp
// 005ecdca  8405308da400         test byte ptr [0xa48d30], al
// 005ecdd0  7530                 jne 0x5ece02
// 005ecdd2  0905308da400         or dword ptr [0xa48d30], eax
// 005ecdd8  6888afa100           push 0xa1af88
// 005ecddd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ecde5  e806d7e1ff           call 0x40a4f0
// 005ecdea  50                   push eax
// 005ecdeb  b9708ca400           mov ecx, 0xa48c70
// 005ecdf0  e8ebc90000           call 0x5f97e0
// 005ecdf5  6890848900           push 0x898490
// 005ecdfa  e8fccc1200           call 0x719afb
// 005ecdff  83c404               add esp, 4
// 005ece02  8b0c24               mov ecx, dword ptr [esp]
// 005ece05  b8708ca400           mov eax, 0xa48c70
// 005ece0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ece11  83c40c               add esp, 0xc
// 005ece14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
