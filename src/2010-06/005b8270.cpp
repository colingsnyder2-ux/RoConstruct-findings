// roc 2010-06 005b8270  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8270
//
// 005b8270  64a100000000         mov eax, dword ptr fs:[0]
// 005b8276  6aff                 push -1
// 005b8278  68be509900           push 0x9950be
// 005b827d  50                   push eax
// 005b827e  b801000000           mov eax, 1
// 005b8283  64892500000000       mov dword ptr fs:[0], esp
// 005b828a  84057c62c100         test byte ptr [0xc1627c], al
// 005b8290  7525                 jne 0x5b82b7
// 005b8292  09057c62c100         or dword ptr [0xc1627c], eax
// 005b8298  b99061c100           mov ecx, 0xc16190
// 005b829d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b82a5  e8c6e91400           call 0x706c70
// 005b82aa  6890109e00           push 0x9e1090
// 005b82af  e8af071f00           call 0x7a8a63
// 005b82b4  83c404               add esp, 4
// 005b82b7  8b0c24               mov ecx, dword ptr [esp]
// 005b82ba  b89061c100           mov eax, 0xc16190
// 005b82bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b82c6  83c40c               add esp, 0xc
// 005b82c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
