// roc 2011-06 005164a0  unit: RBX::Network::NetworkOwnerJob  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005164a0
//
// 005164a0  64a100000000         mov eax, dword ptr fs:[0]
// 005164a6  6aff                 push -1
// 005164a8  681eda9d00           push 0x9dda1e
// 005164ad  50                   push eax
// 005164ae  b801000000           mov eax, 1
// 005164b3  64892500000000       mov dword ptr fs:[0], esp
// 005164ba  8405c889cb00         test byte ptr [0xcb89c8], al
// 005164c0  7525                 jne 0x5164e7
// 005164c2  0905c889cb00         or dword ptr [0xcb89c8], eax
// 005164c8  b9b089cb00           mov ecx, 0xcb89b0
// 005164cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005164d5  e826ae3300           call 0x851300
// 005164da  686041a300           push 0xa34160
// 005164df  e8794c2f00           call 0x80b15d
// 005164e4  83c404               add esp, 4
// 005164e7  8b0c24               mov ecx, dword ptr [esp]
// 005164ea  b8b089cb00           mov eax, 0xcb89b0
// 005164ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005164f6  83c40c               add esp, 0xc
// 005164f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
