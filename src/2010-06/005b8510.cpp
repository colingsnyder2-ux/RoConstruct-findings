// roc 2010-06 005b8510  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8510
//
// 005b8510  64a100000000         mov eax, dword ptr fs:[0]
// 005b8516  6aff                 push -1
// 005b8518  687e519900           push 0x99517e
// 005b851d  50                   push eax
// 005b851e  b801000000           mov eax, 1
// 005b8523  64892500000000       mov dword ptr fs:[0], esp
// 005b852a  84051c68c100         test byte ptr [0xc1681c], al
// 005b8530  7525                 jne 0x5b8557
// 005b8532  09051c68c100         or dword ptr [0xc1681c], eax
// 005b8538  b93067c100           mov ecx, 0xc16730
// 005b853d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8545  e886f71400           call 0x707cd0
// 005b854a  6830109e00           push 0x9e1030
// 005b854f  e80f051f00           call 0x7a8a63
// 005b8554  83c404               add esp, 4
// 005b8557  8b0c24               mov ecx, dword ptr [esp]
// 005b855a  b83067c100           mov eax, 0xc16730
// 005b855f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8566  83c40c               add esp, 0xc
// 005b8569  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
