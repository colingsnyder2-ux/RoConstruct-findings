// roc 2009-06 005eb440  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb440
//
// 005eb440  64a100000000         mov eax, dword ptr fs:[0]
// 005eb446  6aff                 push -1
// 005eb448  68be508600           push 0x8650be
// 005eb44d  50                   push eax
// 005eb44e  b801000000           mov eax, 1
// 005eb453  64892500000000       mov dword ptr fs:[0], esp
// 005eb45a  84057868a400         test byte ptr [0xa46878], al
// 005eb460  7530                 jne 0x5eb492
// 005eb462  09057868a400         or dword ptr [0xa46878], eax
// 005eb468  68507f8e00           push 0x8e7f50
// 005eb46d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb475  e876f0e1ff           call 0x40a4f0
// 005eb47a  50                   push eax
// 005eb47b  b9b867a400           mov ecx, 0xa467b8
// 005eb480  e85be30000           call 0x5f97e0
// 005eb485  6880878900           push 0x898780
// 005eb48a  e86ce61200           call 0x719afb
// 005eb48f  83c404               add esp, 4
// 005eb492  8b0c24               mov ecx, dword ptr [esp]
// 005eb495  b8b867a400           mov eax, 0xa467b8
// 005eb49a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb4a1  83c40c               add esp, 0xc
// 005eb4a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
