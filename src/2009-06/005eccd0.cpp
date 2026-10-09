// roc 2009-06 005eccd0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eccd0
//
// 005eccd0  64a100000000         mov eax, dword ptr fs:[0]
// 005eccd6  6aff                 push -1
// 005eccd8  685e568600           push 0x86565e
// 005eccdd  50                   push eax
// 005eccde  b801000000           mov eax, 1
// 005ecce3  64892500000000       mov dword ptr fs:[0], esp
// 005eccea  8405a08ba400         test byte ptr [0xa48ba0], al
// 005eccf0  7530                 jne 0x5ecd22
// 005eccf2  0905a08ba400         or dword ptr [0xa48ba0], eax
// 005eccf8  687cafa100           push 0xa1af7c
// 005eccfd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ecd05  e8e6d7e1ff           call 0x40a4f0
// 005ecd0a  50                   push eax
// 005ecd0b  b9e08aa400           mov ecx, 0xa48ae0
// 005ecd10  e8cbca0000           call 0x5f97e0
// 005ecd15  68b0848900           push 0x8984b0
// 005ecd1a  e8dccd1200           call 0x719afb
// 005ecd1f  83c404               add esp, 4
// 005ecd22  8b0c24               mov ecx, dword ptr [esp]
// 005ecd25  b8e08aa400           mov eax, 0xa48ae0
// 005ecd2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ecd31  83c40c               add esp, 0xc
// 005ecd34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
