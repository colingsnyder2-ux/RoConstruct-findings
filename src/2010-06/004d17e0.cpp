// roc 2010-06 004d17e0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d17e0
//
// 004d17e0  64a100000000         mov eax, dword ptr fs:[0]
// 004d17e6  6aff                 push -1
// 004d17e8  688eae9800           push 0x98ae8e
// 004d17ed  50                   push eax
// 004d17ee  b801000000           mov eax, 1
// 004d17f3  64892500000000       mov dword ptr fs:[0], esp
// 004d17fa  84050c5dc000         test byte ptr [0xc05d0c], al
// 004d1800  7525                 jne 0x4d1827
// 004d1802  09050c5dc000         or dword ptr [0xc05d0c], eax
// 004d1808  b9205cc000           mov ecx, 0xc05c20
// 004d180d  c744240800000000     mov dword ptr [esp + 8], 0
// 004d1815  e8965b0000           call 0x4d73b0
// 004d181a  68d0cf9d00           push 0x9dcfd0
// 004d181f  e83f722d00           call 0x7a8a63
// 004d1824  83c404               add esp, 4
// 004d1827  8b0c24               mov ecx, dword ptr [esp]
// 004d182a  b8205cc000           mov eax, 0xc05c20
// 004d182f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d1836  83c40c               add esp, 0xc
// 004d1839  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
