// roc 2009-06 005eb670  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb670
//
// 005eb670  64a100000000         mov eax, dword ptr fs:[0]
// 005eb676  6aff                 push -1
// 005eb678  685e518600           push 0x86515e
// 005eb67d  50                   push eax
// 005eb67e  b801000000           mov eax, 1
// 005eb683  64892500000000       mov dword ptr fs:[0], esp
// 005eb68a  8405606ca400         test byte ptr [0xa46c60], al
// 005eb690  7530                 jne 0x5eb6c2
// 005eb692  0905606ca400         or dword ptr [0xa46c60], eax
// 005eb698  68b8a38d00           push 0x8da3b8
// 005eb69d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb6a5  e8d6edffff           call 0x5ea480
// 005eb6aa  50                   push eax
// 005eb6ab  b9a06ba400           mov ecx, 0xa46ba0
// 005eb6b0  e82be10000           call 0x5f97e0
// 005eb6b5  6830878900           push 0x898730
// 005eb6ba  e83ce41200           call 0x719afb
// 005eb6bf  83c404               add esp, 4
// 005eb6c2  8b0c24               mov ecx, dword ptr [esp]
// 005eb6c5  b8a06ba400           mov eax, 0xa46ba0
// 005eb6ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb6d1  83c40c               add esp, 0xc
// 005eb6d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
