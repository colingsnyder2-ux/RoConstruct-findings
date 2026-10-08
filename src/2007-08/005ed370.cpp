// roc 2007-08 005ed370  unit: RBX::VRocket::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed370
//
// 005ed370  64a100000000         mov eax, dword ptr fs:[0]
// 005ed376  6aff                 push -1
// 005ed378  68feb17500           push 0x75b1fe
// 005ed37d  50                   push eax
// 005ed37e  b801000000           mov eax, 1
// 005ed383  64892500000000       mov dword ptr fs:[0], esp
// 005ed38a  840528718c00         test byte ptr [0x8c7128], al
// 005ed390  7530                 jne 0x5ed3c2
// 005ed392  090528718c00         or dword ptr [0x8c7128], eax
// 005ed398  68d8f38a00           push 0x8af3d8
// 005ed39d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ed3a5  e8e6b2e2ff           call 0x418690
// 005ed3aa  50                   push eax
// 005ed3ab  b9a0708c00           mov ecx, 0x8c70a0
// 005ed3b0  e84b38f8ff           call 0x570c00
// 005ed3b5  6800c37700           push 0x77c300
// 005ed3ba  e864390400           call 0x630d23
// 005ed3bf  83c404               add esp, 4
// 005ed3c2  8b0c24               mov ecx, dword ptr [esp]
// 005ed3c5  b8a0708c00           mov eax, 0x8c70a0
// 005ed3ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed3d1  83c40c               add esp, 0xc
// 005ed3d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
