// from server: 100% by auto
// roc 2012-06 0056e480  unit: RBX::Network::IdSerializer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056e480
//
// 0056e480  64a100000000         mov eax, dword ptr fs:[0]
// 0056e486  6aff                 push -1
// 0056e488  689eefaa00           push 0xaaef9e
// 0056e48d  50                   push eax
// 0056e48e  b801000000           mov eax, 1
// 0056e493  64892500000000       mov dword ptr fs:[0], esp
// 0056e49a  8405e845e200         test byte ptr [0xe245e8], al
// 0056e4a0  7524                 jne 0x56e4c6
// 0056e4a2  0905e845e200         or dword ptr [0xe245e8], eax
// 0056e4a8  33c0                 xor eax, eax
// 0056e4aa  681045b100           push 0xb14510
// 0056e4af  a3dc45e200           mov dword ptr [0xe245dc], eax
// 0056e4b4  a3e045e200           mov dword ptr [0xe245e0], eax
// 0056e4b9  a3e445e200           mov dword ptr [0xe245e4], eax
// 0056e4be  e8324d4100           call 0x9831f5
// 0056e4c3  83c404               add esp, 4
// 0056e4c6  8b0c24               mov ecx, dword ptr [esp]
// 0056e4c9  b8d845e200           mov eax, 0xe245d8
// 0056e4ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0056e4d5  83c40c               add esp, 0xc
// 0056e4d8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
