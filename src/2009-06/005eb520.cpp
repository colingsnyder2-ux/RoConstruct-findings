// roc 2009-06 005eb520  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb520
//
// 005eb520  64a100000000         mov eax, dword ptr fs:[0]
// 005eb526  6aff                 push -1
// 005eb528  68fe508600           push 0x8650fe
// 005eb52d  50                   push eax
// 005eb52e  b801000000           mov eax, 1
// 005eb533  64892500000000       mov dword ptr fs:[0], esp
// 005eb53a  8405086aa400         test byte ptr [0xa46a08], al
// 005eb540  7530                 jne 0x5eb572
// 005eb542  0905086aa400         or dword ptr [0xa46a08], eax
// 005eb548  68587f8e00           push 0x8e7f58
// 005eb54d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb555  e8e6feffff           call 0x5eb440
// 005eb55a  50                   push eax
// 005eb55b  b94869a400           mov ecx, 0xa46948
// 005eb560  e87be20000           call 0x5f97e0
// 005eb565  6860878900           push 0x898760
// 005eb56a  e88ce51200           call 0x719afb
// 005eb56f  83c404               add esp, 4
// 005eb572  8b0c24               mov ecx, dword ptr [esp]
// 005eb575  b84869a400           mov eax, 0xa46948
// 005eb57a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb581  83c40c               add esp, 0xc
// 005eb584  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
