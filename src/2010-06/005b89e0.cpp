// roc 2010-06 005b89e0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b89e0
//
// 005b89e0  64a100000000         mov eax, dword ptr fs:[0]
// 005b89e6  6aff                 push -1
// 005b89e8  68de529900           push 0x9952de
// 005b89ed  50                   push eax
// 005b89ee  b801000000           mov eax, 1
// 005b89f3  64892500000000       mov dword ptr fs:[0], esp
// 005b89fa  84056c72c100         test byte ptr [0xc1726c], al
// 005b8a00  7525                 jne 0x5b8a27
// 005b8a02  09056c72c100         or dword ptr [0xc1726c], eax
// 005b8a08  b98071c100           mov ecx, 0xc17180
// 005b8a0d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8a15  e8660bffff           call 0x5a9580
// 005b8a1a  68800f9e00           push 0x9e0f80
// 005b8a1f  e83f001f00           call 0x7a8a63
// 005b8a24  83c404               add esp, 4
// 005b8a27  8b0c24               mov ecx, dword ptr [esp]
// 005b8a2a  b88071c100           mov eax, 0xc17180
// 005b8a2f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8a36  83c40c               add esp, 0xc
// 005b8a39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
