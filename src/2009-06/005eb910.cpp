// roc 2009-06 005eb910  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb910
//
// 005eb910  64a100000000         mov eax, dword ptr fs:[0]
// 005eb916  6aff                 push -1
// 005eb918  681e528600           push 0x86521e
// 005eb91d  50                   push eax
// 005eb91e  b801000000           mov eax, 1
// 005eb923  64892500000000       mov dword ptr fs:[0], esp
// 005eb92a  84051071a400         test byte ptr [0xa47110], al
// 005eb930  7530                 jne 0x5eb962
// 005eb932  09051071a400         or dword ptr [0xa47110], eax
// 005eb938  682006a200           push 0xa20620
// 005eb93d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb945  e8a6ebe1ff           call 0x40a4f0
// 005eb94a  50                   push eax
// 005eb94b  b95070a400           mov ecx, 0xa47050
// 005eb950  e88bde0000           call 0x5f97e0
// 005eb955  68d0868900           push 0x8986d0
// 005eb95a  e89ce11200           call 0x719afb
// 005eb95f  83c404               add esp, 4
// 005eb962  8b0c24               mov ecx, dword ptr [esp]
// 005eb965  b85070a400           mov eax, 0xa47050
// 005eb96a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb971  83c40c               add esp, 0xc
// 005eb974  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
