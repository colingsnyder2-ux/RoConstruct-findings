// from server: 100% by auto
// roc 2010-06 005b85f0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b85f0
//
// 005b85f0  64a100000000         mov eax, dword ptr fs:[0]
// 005b85f6  6aff                 push -1
// 005b85f8  68be519900           push 0x9951be
// 005b85fd  50                   push eax
// 005b85fe  b801000000           mov eax, 1
// 005b8603  64892500000000       mov dword ptr fs:[0], esp
// 005b860a  8405fc69c100         test byte ptr [0xc169fc], al
// 005b8610  7525                 jne 0x5b8637
// 005b8612  0905fc69c100         or dword ptr [0xc169fc], eax
// 005b8618  b91069c100           mov ecx, 0xc16910
// 005b861d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8625  e826f81400           call 0x707e50
// 005b862a  6810109e00           push 0x9e1010
// 005b862f  e82f041f00           call 0x7a8a63
// 005b8634  83c404               add esp, 4
// 005b8637  8b0c24               mov ecx, dword ptr [esp]
// 005b863a  b81069c100           mov eax, 0xc16910
// 005b863f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8646  83c40c               add esp, 0xc
// 005b8649  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
