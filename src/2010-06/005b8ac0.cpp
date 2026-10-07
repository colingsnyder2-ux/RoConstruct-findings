// roc 2010-06 005b8ac0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8ac0
//
// 005b8ac0  64a100000000         mov eax, dword ptr fs:[0]
// 005b8ac6  6aff                 push -1
// 005b8ac8  681e539900           push 0x99531e
// 005b8acd  50                   push eax
// 005b8ace  b801000000           mov eax, 1
// 005b8ad3  64892500000000       mov dword ptr fs:[0], esp
// 005b8ada  84054c74c100         test byte ptr [0xc1744c], al
// 005b8ae0  7525                 jne 0x5b8b07
// 005b8ae2  09054c74c100         or dword ptr [0xc1744c], eax
// 005b8ae8  b96073c100           mov ecx, 0xc17360
// 005b8aed  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8af5  e8566d0b00           call 0x66f850
// 005b8afa  68600f9e00           push 0x9e0f60
// 005b8aff  e85fff1e00           call 0x7a8a63
// 005b8b04  83c404               add esp, 4
// 005b8b07  8b0c24               mov ecx, dword ptr [esp]
// 005b8b0a  b86073c100           mov eax, 0xc17360
// 005b8b0f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8b16  83c40c               add esp, 0xc
// 005b8b19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
