// roc 2012-06 006c8dc0  unit: RBX::Reflection::PAVPropertyDescriptor::?$trie::depth_exceeded_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c8dc0
//
// 006c8dc0  64a100000000         mov eax, dword ptr fs:[0]
// 006c8dc6  6aff                 push -1
// 006c8dc8  685ea3ab00           push 0xaba35e
// 006c8dcd  50                   push eax
// 006c8dce  b801000000           mov eax, 1
// 006c8dd3  64892500000000       mov dword ptr fs:[0], esp
// 006c8dda  8405c8e7e200         test byte ptr [0xe2e7c8], al
// 006c8de0  7524                 jne 0x6c8e06
// 006c8de2  0905c8e7e200         or dword ptr [0xe2e7c8], eax
// 006c8de8  33c0                 xor eax, eax
// 006c8dea  685068b100           push 0xb16850
// 006c8def  a3bce7e200           mov dword ptr [0xe2e7bc], eax
// 006c8df4  a3c0e7e200           mov dword ptr [0xe2e7c0], eax
// 006c8df9  a3c4e7e200           mov dword ptr [0xe2e7c4], eax
// 006c8dfe  e8f2a32b00           call 0x9831f5
// 006c8e03  83c404               add esp, 4
// 006c8e06  8b0c24               mov ecx, dword ptr [esp]
// 006c8e09  b8b8e7e200           mov eax, 0xe2e7b8
// 006c8e0e  64890d00000000       mov dword ptr fs:[0], ecx
// 006c8e15  83c40c               add esp, 0xc
// 006c8e18  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
