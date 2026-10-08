// from server: 100% by auto
// roc 2012-06 006c8e30  unit: RBX::Reflection::PAVPropertyDescriptor::?$trie::depth_exceeded_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c8e30
//
// 006c8e30  64a100000000         mov eax, dword ptr fs:[0]
// 006c8e36  6aff                 push -1
// 006c8e38  687ea3ab00           push 0xaba37e
// 006c8e3d  50                   push eax
// 006c8e3e  b801000000           mov eax, 1
// 006c8e43  64892500000000       mov dword ptr fs:[0], esp
// 006c8e4a  8405dce7e200         test byte ptr [0xe2e7dc], al
// 006c8e50  7524                 jne 0x6c8e76
// 006c8e52  0905dce7e200         or dword ptr [0xe2e7dc], eax
// 006c8e58  33c0                 xor eax, eax
// 006c8e5a  681068b100           push 0xb16810
// 006c8e5f  a3d0e7e200           mov dword ptr [0xe2e7d0], eax
// 006c8e64  a3d4e7e200           mov dword ptr [0xe2e7d4], eax
// 006c8e69  a3d8e7e200           mov dword ptr [0xe2e7d8], eax
// 006c8e6e  e882a32b00           call 0x9831f5
// 006c8e73  83c404               add esp, 4
// 006c8e76  8b0c24               mov ecx, dword ptr [esp]
// 006c8e79  b8cce7e200           mov eax, 0xe2e7cc
// 006c8e7e  64890d00000000       mov dword ptr fs:[0], ecx
// 006c8e85  83c40c               add esp, 0xc
// 006c8e88  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
