// roc 2008-06 004a3cd0  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3cd0
//
// 004a3cd0  64a100000000         mov eax, dword ptr fs:[0]
// 004a3cd6  6aff                 push -1
// 004a3cd8  682e7d7c00           push 0x7c7d2e
// 004a3cdd  50                   push eax
// 004a3cde  b801000000           mov eax, 1
// 004a3ce3  64892500000000       mov dword ptr fs:[0], esp
// 004a3cea  8405e80d9700         test byte ptr [0x970de8], al
// 004a3cf0  7530                 jne 0x4a3d22
// 004a3cf2  0905e80d9700         or dword ptr [0x970de8], eax
// 004a3cf8  68a0429500           push 0x9542a0
// 004a3cfd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004a3d05  e87670f6ff           call 0x40ad80
// 004a3d0a  50                   push eax
// 004a3d0b  b9280d9700           mov ecx, 0x970d28
// 004a3d10  e8dbcb0c00           call 0x5708f0
// 004a3d15  68e0bb7f00           push 0x7fbbe0
// 004a3d1a  e890da1f00           call 0x6a17af
// 004a3d1f  83c404               add esp, 4
// 004a3d22  8b0c24               mov ecx, dword ptr [esp]
// 004a3d25  b8280d9700           mov eax, 0x970d28
// 004a3d2a  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3d31  83c40c               add esp, 0xc
// 004a3d34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
