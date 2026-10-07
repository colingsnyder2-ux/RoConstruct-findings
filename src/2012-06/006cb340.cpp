// roc 2012-06 006cb340  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006cb340
//
// 006cb340  64a100000000         mov eax, dword ptr fs:[0]
// 006cb346  6aff                 push -1
// 006cb348  68aea6ab00           push 0xaba6ae
// 006cb34d  50                   push eax
// 006cb34e  b801000000           mov eax, 1
// 006cb353  64892500000000       mov dword ptr fs:[0], esp
// 006cb35a  84052ce8e200         test byte ptr [0xe2e82c], al
// 006cb360  7524                 jne 0x6cb386
// 006cb362  09052ce8e200         or dword ptr [0xe2e82c], eax
// 006cb368  33c0                 xor eax, eax
// 006cb36a  68e068b100           push 0xb168e0
// 006cb36f  a320e8e200           mov dword ptr [0xe2e820], eax
// 006cb374  a324e8e200           mov dword ptr [0xe2e824], eax
// 006cb379  a328e8e200           mov dword ptr [0xe2e828], eax
// 006cb37e  e8727e2b00           call 0x9831f5
// 006cb383  83c404               add esp, 4
// 006cb386  8b0c24               mov ecx, dword ptr [esp]
// 006cb389  b81ce8e200           mov eax, 0xe2e81c
// 006cb38e  64890d00000000       mov dword ptr fs:[0], ecx
// 006cb395  83c40c               add esp, 0xc
// 006cb398  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
