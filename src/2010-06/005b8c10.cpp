// from server: 100% by auto
// roc 2010-06 005b8c10  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8c10
//
// 005b8c10  64a100000000         mov eax, dword ptr fs:[0]
// 005b8c16  6aff                 push -1
// 005b8c18  687e539900           push 0x99537e
// 005b8c1d  50                   push eax
// 005b8c1e  b801000000           mov eax, 1
// 005b8c23  64892500000000       mov dword ptr fs:[0], esp
// 005b8c2a  84051c77c100         test byte ptr [0xc1771c], al
// 005b8c30  7525                 jne 0x5b8c57
// 005b8c32  09051c77c100         or dword ptr [0xc1771c], eax
// 005b8c38  b93076c100           mov ecx, 0xc17630
// 005b8c3d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8c45  e836e71400           call 0x707380
// 005b8c4a  68300f9e00           push 0x9e0f30
// 005b8c4f  e80ffe1e00           call 0x7a8a63
// 005b8c54  83c404               add esp, 4
// 005b8c57  8b0c24               mov ecx, dword ptr [esp]
// 005b8c5a  b83076c100           mov eax, 0xc17630
// 005b8c5f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8c66  83c40c               add esp, 0xc
// 005b8c69  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
