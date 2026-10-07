// roc 2010-06 005b8f20  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8f20
//
// 005b8f20  64a100000000         mov eax, dword ptr fs:[0]
// 005b8f26  6aff                 push -1
// 005b8f28  685e549900           push 0x99545e
// 005b8f2d  50                   push eax
// 005b8f2e  b801000000           mov eax, 1
// 005b8f33  64892500000000       mov dword ptr fs:[0], esp
// 005b8f3a  8405ac7dc100         test byte ptr [0xc17dac], al
// 005b8f40  7525                 jne 0x5b8f67
// 005b8f42  0905ac7dc100         or dword ptr [0xc17dac], eax
// 005b8f48  b9c07cc100           mov ecx, 0xc17cc0
// 005b8f4d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8f55  e8e6121500           call 0x70a240
// 005b8f5a  68c00e9e00           push 0x9e0ec0
// 005b8f5f  e8fffa1e00           call 0x7a8a63
// 005b8f64  83c404               add esp, 4
// 005b8f67  8b0c24               mov ecx, dword ptr [esp]
// 005b8f6a  b8c07cc100           mov eax, 0xc17cc0
// 005b8f6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8f76  83c40c               add esp, 0xc
// 005b8f79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
