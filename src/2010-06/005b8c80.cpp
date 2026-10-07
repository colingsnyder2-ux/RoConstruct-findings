// roc 2010-06 005b8c80  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8c80
//
// 005b8c80  64a100000000         mov eax, dword ptr fs:[0]
// 005b8c86  6aff                 push -1
// 005b8c88  689e539900           push 0x99539e
// 005b8c8d  50                   push eax
// 005b8c8e  b801000000           mov eax, 1
// 005b8c93  64892500000000       mov dword ptr fs:[0], esp
// 005b8c9a  84050c78c100         test byte ptr [0xc1780c], al
// 005b8ca0  7525                 jne 0x5b8cc7
// 005b8ca2  09050c78c100         or dword ptr [0xc1780c], eax
// 005b8ca8  b92077c100           mov ecx, 0xc17720
// 005b8cad  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8cb5  e846e81400           call 0x707500
// 005b8cba  68200f9e00           push 0x9e0f20
// 005b8cbf  e89ffd1e00           call 0x7a8a63
// 005b8cc4  83c404               add esp, 4
// 005b8cc7  8b0c24               mov ecx, dword ptr [esp]
// 005b8cca  b82077c100           mov eax, 0xc17720
// 005b8ccf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8cd6  83c40c               add esp, 0xc
// 005b8cd9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
