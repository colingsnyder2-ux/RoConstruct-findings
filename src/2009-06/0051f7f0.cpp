// roc 2009-06 0051f7f0  unit: RBX::VBlockMesh::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f7f0
//
// 0051f7f0  64a100000000         mov eax, dword ptr fs:[0]
// 0051f7f6  6aff                 push -1
// 0051f7f8  688ee38500           push 0x85e38e
// 0051f7fd  50                   push eax
// 0051f7fe  b801000000           mov eax, 1
// 0051f803  64892500000000       mov dword ptr fs:[0], esp
// 0051f80a  84050418a400         test byte ptr [0xa41804], al
// 0051f810  7525                 jne 0x51f837
// 0051f812  09050418a400         or dword ptr [0xa41804], eax
// 0051f818  b9a017a400           mov ecx, 0xa417a0
// 0051f81d  c744240800000000     mov dword ptr [esp + 8], 0
// 0051f825  e866f2ffff           call 0x51ea90
// 0051f82a  68d0658900           push 0x8965d0
// 0051f82f  e8c7a21f00           call 0x719afb
// 0051f834  83c404               add esp, 4
// 0051f837  8b0c24               mov ecx, dword ptr [esp]
// 0051f83a  b8a017a400           mov eax, 0xa417a0
// 0051f83f  64890d00000000       mov dword ptr fs:[0], ecx
// 0051f846  83c40c               add esp, 0xc
// 0051f849  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
