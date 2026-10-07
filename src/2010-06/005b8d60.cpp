// roc 2010-06 005b8d60  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8d60
//
// 005b8d60  64a100000000         mov eax, dword ptr fs:[0]
// 005b8d66  6aff                 push -1
// 005b8d68  68de539900           push 0x9953de
// 005b8d6d  50                   push eax
// 005b8d6e  b801000000           mov eax, 1
// 005b8d73  64892500000000       mov dword ptr fs:[0], esp
// 005b8d7a  8405ec79c100         test byte ptr [0xc179ec], al
// 005b8d80  7525                 jne 0x5b8da7
// 005b8d82  0905ec79c100         or dword ptr [0xc179ec], eax
// 005b8d88  b90079c100           mov ecx, 0xc17900
// 005b8d8d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8d95  e8c6ea1400           call 0x707860
// 005b8d9a  68000f9e00           push 0x9e0f00
// 005b8d9f  e8bffc1e00           call 0x7a8a63
// 005b8da4  83c404               add esp, 4
// 005b8da7  8b0c24               mov ecx, dword ptr [esp]
// 005b8daa  b80079c100           mov eax, 0xc17900
// 005b8daf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8db6  83c40c               add esp, 0xc
// 005b8db9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
