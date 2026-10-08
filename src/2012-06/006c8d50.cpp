// from server: 100% by auto
// roc 2012-06 006c8d50  unit: RBX::Reflection::PAVPropertyDescriptor::?$trie::depth_exceeded_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c8d50
//
// 006c8d50  64a100000000         mov eax, dword ptr fs:[0]
// 006c8d56  6aff                 push -1
// 006c8d58  683ea3ab00           push 0xaba33e
// 006c8d5d  50                   push eax
// 006c8d5e  b801000000           mov eax, 1
// 006c8d63  64892500000000       mov dword ptr fs:[0], esp
// 006c8d6a  8405b4e7e200         test byte ptr [0xe2e7b4], al
// 006c8d70  7524                 jne 0x6c8d96
// 006c8d72  0905b4e7e200         or dword ptr [0xe2e7b4], eax
// 006c8d78  33c0                 xor eax, eax
// 006c8d7a  689068b100           push 0xb16890
// 006c8d7f  a3a8e7e200           mov dword ptr [0xe2e7a8], eax
// 006c8d84  a3ace7e200           mov dword ptr [0xe2e7ac], eax
// 006c8d89  a3b0e7e200           mov dword ptr [0xe2e7b0], eax
// 006c8d8e  e862a42b00           call 0x9831f5
// 006c8d93  83c404               add esp, 4
// 006c8d96  8b0c24               mov ecx, dword ptr [esp]
// 006c8d99  b8a4e7e200           mov eax, 0xe2e7a4
// 006c8d9e  64890d00000000       mov dword ptr fs:[0], ecx
// 006c8da5  83c40c               add esp, 0xc
// 006c8da8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
