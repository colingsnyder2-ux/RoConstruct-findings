// from server: 100% by auto
// roc 2012-06 006c89f0  unit: RBX::Reflection::PAVPropertyDescriptor::?$trie::depth_exceeded_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c89f0
//
// 006c89f0  64a100000000         mov eax, dword ptr fs:[0]
// 006c89f6  6aff                 push -1
// 006c89f8  681ea3ab00           push 0xaba31e
// 006c89fd  50                   push eax
// 006c89fe  b801000000           mov eax, 1
// 006c8a03  64892500000000       mov dword ptr fs:[0], esp
// 006c8a0a  84059ce7e200         test byte ptr [0xe2e79c], al
// 006c8a10  7524                 jne 0x6c8a36
// 006c8a12  09059ce7e200         or dword ptr [0xe2e79c], eax
// 006c8a18  33c0                 xor eax, eax
// 006c8a1a  68d067b100           push 0xb167d0
// 006c8a1f  a390e7e200           mov dword ptr [0xe2e790], eax
// 006c8a24  a394e7e200           mov dword ptr [0xe2e794], eax
// 006c8a29  a398e7e200           mov dword ptr [0xe2e798], eax
// 006c8a2e  e8c2a72b00           call 0x9831f5
// 006c8a33  83c404               add esp, 4
// 006c8a36  8b0c24               mov ecx, dword ptr [esp]
// 006c8a39  b88ce7e200           mov eax, 0xe2e78c
// 006c8a3e  64890d00000000       mov dword ptr fs:[0], ecx
// 006c8a45  83c40c               add esp, 0xc
// 006c8a48  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
