// roc 2010-06 005b8890  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8890
//
// 005b8890  64a100000000         mov eax, dword ptr fs:[0]
// 005b8896  6aff                 push -1
// 005b8898  687e529900           push 0x99527e
// 005b889d  50                   push eax
// 005b889e  b801000000           mov eax, 1
// 005b88a3  64892500000000       mov dword ptr fs:[0], esp
// 005b88aa  84059c6fc100         test byte ptr [0xc16f9c], al
// 005b88b0  7525                 jne 0x5b88d7
// 005b88b2  09059c6fc100         or dword ptr [0xc16f9c], eax
// 005b88b8  b9b06ec100           mov ecx, 0xc16eb0
// 005b88bd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b88c5  e856101500           call 0x709920
// 005b88ca  68b00f9e00           push 0x9e0fb0
// 005b88cf  e88f011f00           call 0x7a8a63
// 005b88d4  83c404               add esp, 4
// 005b88d7  8b0c24               mov ecx, dword ptr [esp]
// 005b88da  b8b06ec100           mov eax, 0xc16eb0
// 005b88df  64890d00000000       mov dword ptr fs:[0], ecx
// 005b88e6  83c40c               add esp, 0xc
// 005b88e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
