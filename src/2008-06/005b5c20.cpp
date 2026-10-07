// roc 2008-06 005b5c20  unit: RBX::VHat::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b5c20
//
// 005b5c20  64a100000000         mov eax, dword ptr fs:[0]
// 005b5c26  6aff                 push -1
// 005b5c28  685e397d00           push 0x7d395e
// 005b5c2d  50                   push eax
// 005b5c2e  b801000000           mov eax, 1
// 005b5c33  64892500000000       mov dword ptr fs:[0], esp
// 005b5c3a  8405986f9700         test byte ptr [0x976f98], al
// 005b5c40  7525                 jne 0x5b5c67
// 005b5c42  0905986f9700         or dword ptr [0x976f98], eax
// 005b5c48  b9e86e9700           mov ecx, 0x976ee8
// 005b5c4d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b5c55  e8d6e9ffff           call 0x5b4630
// 005b5c5a  68c0e27f00           push 0x7fe2c0
// 005b5c5f  e84bbb0e00           call 0x6a17af
// 005b5c64  83c404               add esp, 4
// 005b5c67  8b0c24               mov ecx, dword ptr [esp]
// 005b5c6a  b8e86e9700           mov eax, 0x976ee8
// 005b5c6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b5c76  83c40c               add esp, 0xc
// 005b5c79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
