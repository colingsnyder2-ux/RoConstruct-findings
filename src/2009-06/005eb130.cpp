// roc 2009-06 005eb130  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eb130
//
// 005eb130  64a100000000         mov eax, dword ptr fs:[0]
// 005eb136  6aff                 push -1
// 005eb138  68de4f8600           push 0x864fde
// 005eb13d  50                   push eax
// 005eb13e  b801000000           mov eax, 1
// 005eb143  64892500000000       mov dword ptr fs:[0], esp
// 005eb14a  84050063a400         test byte ptr [0xa46300], al
// 005eb150  7530                 jne 0x5eb182
// 005eb152  09050063a400         or dword ptr [0xa46300], eax
// 005eb158  68884b8e00           push 0x8e4b88
// 005eb15d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eb165  e8e6feffff           call 0x5eb050
// 005eb16a  50                   push eax
// 005eb16b  b94062a400           mov ecx, 0xa46240
// 005eb170  e86be60000           call 0x5f97e0
// 005eb175  68f0878900           push 0x8987f0
// 005eb17a  e87ce91200           call 0x719afb
// 005eb17f  83c404               add esp, 4
// 005eb182  8b0c24               mov ecx, dword ptr [esp]
// 005eb185  b84062a400           mov eax, 0xa46240
// 005eb18a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb191  83c40c               add esp, 0xc
// 005eb194  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
