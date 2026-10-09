// roc 2008-06 004a3dd0  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3dd0
//
// 004a3dd0  64a100000000         mov eax, dword ptr fs:[0]
// 004a3dd6  6aff                 push -1
// 004a3dd8  687e7d7c00           push 0x7c7d7e
// 004a3ddd  50                   push eax
// 004a3dde  b801000000           mov eax, 1
// 004a3de3  64892500000000       mov dword ptr fs:[0], esp
// 004a3dea  8405b00e9700         test byte ptr [0x970eb0], al
// 004a3df0  7530                 jne 0x4a3e22
// 004a3df2  0905b00e9700         or dword ptr [0x970eb0], eax
// 004a3df8  68a8429500           push 0x9542a8
// 004a3dfd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004a3e05  e8c6feffff           call 0x4a3cd0
// 004a3e0a  50                   push eax
// 004a3e0b  b9f00d9700           mov ecx, 0x970df0
// 004a3e10  e8dbca0c00           call 0x5708f0
// 004a3e15  68d0bb7f00           push 0x7fbbd0
// 004a3e1a  e890d91f00           call 0x6a17af
// 004a3e1f  83c404               add esp, 4
// 004a3e22  8b0c24               mov ecx, dword ptr [esp]
// 004a3e25  b8f00d9700           mov eax, 0x970df0
// 004a3e2a  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3e31  83c40c               add esp, 0xc
// 004a3e34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
