// from server: 100% by auto
// roc 2010-06 005b83c0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b83c0
//
// 005b83c0  64a100000000         mov eax, dword ptr fs:[0]
// 005b83c6  6aff                 push -1
// 005b83c8  681e519900           push 0x99511e
// 005b83cd  50                   push eax
// 005b83ce  b801000000           mov eax, 1
// 005b83d3  64892500000000       mov dword ptr fs:[0], esp
// 005b83da  84054c65c100         test byte ptr [0xc1654c], al
// 005b83e0  7525                 jne 0x5b8407
// 005b83e2  09054c65c100         or dword ptr [0xc1654c], eax
// 005b83e8  b96064c100           mov ecx, 0xc16460
// 005b83ed  c744240800000000     mov dword ptr [esp + 8], 0
// 005b83f5  e806ec0300           call 0x5f7000
// 005b83fa  6860109e00           push 0x9e1060
// 005b83ff  e85f061f00           call 0x7a8a63
// 005b8404  83c404               add esp, 4
// 005b8407  8b0c24               mov ecx, dword ptr [esp]
// 005b840a  b86064c100           mov eax, 0xc16460
// 005b840f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8416  83c40c               add esp, 0xc
// 005b8419  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
