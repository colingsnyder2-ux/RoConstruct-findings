// roc 2009-06 005eba60  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eba60
//
// 005eba60  64a100000000         mov eax, dword ptr fs:[0]
// 005eba66  6aff                 push -1
// 005eba68  687e528600           push 0x86527e
// 005eba6d  50                   push eax
// 005eba6e  b801000000           mov eax, 1
// 005eba73  64892500000000       mov dword ptr fs:[0], esp
// 005eba7a  84056873a400         test byte ptr [0xa47368], al
// 005eba80  7530                 jne 0x5ebab2
// 005eba82  09056873a400         or dword ptr [0xa47368], eax
// 005eba88  6814cfa100           push 0xa1cf14
// 005eba8d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eba95  e856eae1ff           call 0x40a4f0
// 005eba9a  50                   push eax
// 005eba9b  b9a872a400           mov ecx, 0xa472a8
// 005ebaa0  e83bdd0000           call 0x5f97e0
// 005ebaa5  68a0868900           push 0x8986a0
// 005ebaaa  e84ce01200           call 0x719afb
// 005ebaaf  83c404               add esp, 4
// 005ebab2  8b0c24               mov ecx, dword ptr [esp]
// 005ebab5  b8a872a400           mov eax, 0xa472a8
// 005ebaba  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebac1  83c40c               add esp, 0xc
// 005ebac4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
