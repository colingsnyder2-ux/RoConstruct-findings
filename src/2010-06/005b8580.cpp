// roc 2010-06 005b8580  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8580
//
// 005b8580  64a100000000         mov eax, dword ptr fs:[0]
// 005b8586  6aff                 push -1
// 005b8588  689e519900           push 0x99519e
// 005b858d  50                   push eax
// 005b858e  b801000000           mov eax, 1
// 005b8593  64892500000000       mov dword ptr fs:[0], esp
// 005b859a  84050c69c100         test byte ptr [0xc1690c], al
// 005b85a0  7525                 jne 0x5b85c7
// 005b85a2  09050c69c100         or dword ptr [0xc1690c], eax
// 005b85a8  b92068c100           mov ecx, 0xc16820
// 005b85ad  c744240800000000     mov dword ptr [esp + 8], 0
// 005b85b5  e8d6810900           call 0x650790
// 005b85ba  6820109e00           push 0x9e1020
// 005b85bf  e89f041f00           call 0x7a8a63
// 005b85c4  83c404               add esp, 4
// 005b85c7  8b0c24               mov ecx, dword ptr [esp]
// 005b85ca  b82068c100           mov eax, 0xc16820
// 005b85cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b85d6  83c40c               add esp, 0xc
// 005b85d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
