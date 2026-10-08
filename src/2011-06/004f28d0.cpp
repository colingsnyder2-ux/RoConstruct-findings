// from server: 100% by auto
// roc 2011-06 004f28d0  unit: RBX::Network::IdSerializer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f28d0
//
// 004f28d0  64a100000000         mov eax, dword ptr fs:[0]
// 004f28d6  6aff                 push -1
// 004f28d8  68febc9d00           push 0x9dbcfe
// 004f28dd  50                   push eax
// 004f28de  b801000000           mov eax, 1
// 004f28e3  64892500000000       mov dword ptr fs:[0], esp
// 004f28ea  84052482cb00         test byte ptr [0xcb8224], al
// 004f28f0  7524                 jne 0x4f2916
// 004f28f2  09052482cb00         or dword ptr [0xcb8224], eax
// 004f28f8  33c0                 xor eax, eax
// 004f28fa  68d03aa300           push 0xa33ad0
// 004f28ff  a31882cb00           mov dword ptr [0xcb8218], eax
// 004f2904  a31c82cb00           mov dword ptr [0xcb821c], eax
// 004f2909  a32082cb00           mov dword ptr [0xcb8220], eax
// 004f290e  e84a883100           call 0x80b15d
// 004f2913  83c404               add esp, 4
// 004f2916  8b0c24               mov ecx, dword ptr [esp]
// 004f2919  b81482cb00           mov eax, 0xcb8214
// 004f291e  64890d00000000       mov dword ptr fs:[0], ecx
// 004f2925  83c40c               add esp, 0xc
// 004f2928  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?indexArray@Shape@G3D@@UBEABV?$Array@H@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
