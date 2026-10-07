// roc 2010-06 005b8eb0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8eb0
//
// 005b8eb0  64a100000000         mov eax, dword ptr fs:[0]
// 005b8eb6  6aff                 push -1
// 005b8eb8  683e549900           push 0x99543e
// 005b8ebd  50                   push eax
// 005b8ebe  b801000000           mov eax, 1
// 005b8ec3  64892500000000       mov dword ptr fs:[0], esp
// 005b8eca  8405bc7cc100         test byte ptr [0xc17cbc], al
// 005b8ed0  7525                 jne 0x5b8ef7
// 005b8ed2  0905bc7cc100         or dword ptr [0xc17cbc], eax
// 005b8ed8  b9d07bc100           mov ecx, 0xc17bd0
// 005b8edd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8ee5  e8a6c40800           call 0x645390
// 005b8eea  68d00e9e00           push 0x9e0ed0
// 005b8eef  e86ffb1e00           call 0x7a8a63
// 005b8ef4  83c404               add esp, 4
// 005b8ef7  8b0c24               mov ecx, dword ptr [esp]
// 005b8efa  b8d07bc100           mov eax, 0xc17bd0
// 005b8eff  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8f06  83c40c               add esp, 0xc
// 005b8f09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
