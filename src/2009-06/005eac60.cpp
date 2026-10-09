// roc 2009-06 005eac60  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eac60
//
// 005eac60  64a100000000         mov eax, dword ptr fs:[0]
// 005eac66  6aff                 push -1
// 005eac68  687e4e8600           push 0x864e7e
// 005eac6d  50                   push eax
// 005eac6e  b801000000           mov eax, 1
// 005eac73  64892500000000       mov dword ptr fs:[0], esp
// 005eac7a  8405685aa400         test byte ptr [0xa45a68], al
// 005eac80  7530                 jne 0x5eacb2
// 005eac82  0905685aa400         or dword ptr [0xa45a68], eax
// 005eac88  681ce7a100           push 0xa1e71c
// 005eac8d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eac95  e856f8e1ff           call 0x40a4f0
// 005eac9a  50                   push eax
// 005eac9b  b9a859a400           mov ecx, 0xa459a8
// 005eaca0  e83beb0000           call 0x5f97e0
// 005eaca5  68a0888900           push 0x8988a0
// 005eacaa  e84cee1200           call 0x719afb
// 005eacaf  83c404               add esp, 4
// 005eacb2  8b0c24               mov ecx, dword ptr [esp]
// 005eacb5  b8a859a400           mov eax, 0xa459a8
// 005eacba  64890d00000000       mov dword ptr fs:[0], ecx
// 005eacc1  83c40c               add esp, 0xc
// 005eacc4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
