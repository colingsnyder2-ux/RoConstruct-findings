// roc 2010-06 005b8cf0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8cf0
//
// 005b8cf0  64a100000000         mov eax, dword ptr fs:[0]
// 005b8cf6  6aff                 push -1
// 005b8cf8  68be539900           push 0x9953be
// 005b8cfd  50                   push eax
// 005b8cfe  b801000000           mov eax, 1
// 005b8d03  64892500000000       mov dword ptr fs:[0], esp
// 005b8d0a  8405fc78c100         test byte ptr [0xc178fc], al
// 005b8d10  7525                 jne 0x5b8d37
// 005b8d12  0905fc78c100         or dword ptr [0xc178fc], eax
// 005b8d18  b91078c100           mov ecx, 0xc17810
// 005b8d1d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8d25  e886e91400           call 0x7076b0
// 005b8d2a  68100f9e00           push 0x9e0f10
// 005b8d2f  e82ffd1e00           call 0x7a8a63
// 005b8d34  83c404               add esp, 4
// 005b8d37  8b0c24               mov ecx, dword ptr [esp]
// 005b8d3a  b81078c100           mov eax, 0xc17810
// 005b8d3f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8d46  83c40c               add esp, 0xc
// 005b8d49  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
