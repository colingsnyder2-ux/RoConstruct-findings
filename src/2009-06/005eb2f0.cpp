// roc 2009-06 005eb2f0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb2f0
//
// 005eb2f0  64a100000000         mov eax, dword ptr fs:[0]
// 005eb2f6  6aff                 push -1
// 005eb2f8  685e508600           push 0x86505e
// 005eb2fd  50                   push eax
// 005eb2fe  b801000000           mov eax, 1
// 005eb303  64892500000000       mov dword ptr fs:[0], esp
// 005eb30a  84052066a400         test byte ptr [0xa46620], al
// 005eb310  7530                 jne 0x5eb342
// 005eb312  09052066a400         or dword ptr [0xa46620], eax
// 005eb318  68b04b8e00           push 0x8e4bb0
// 005eb31d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb325  e856ffffff           call 0x5eb280
// 005eb32a  50                   push eax
// 005eb32b  b96065a400           mov ecx, 0xa46560
// 005eb330  e8abe40000           call 0x5f97e0
// 005eb335  68b0878900           push 0x8987b0
// 005eb33a  e8bce71200           call 0x719afb
// 005eb33f  83c404               add esp, 4
// 005eb342  8b0c24               mov ecx, dword ptr [esp]
// 005eb345  b86065a400           mov eax, 0xa46560
// 005eb34a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb351  83c40c               add esp, 0xc
// 005eb354  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
