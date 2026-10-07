// roc 2010-06 005b8e40  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8e40
//
// 005b8e40  64a100000000         mov eax, dword ptr fs:[0]
// 005b8e46  6aff                 push -1
// 005b8e48  681e549900           push 0x99541e
// 005b8e4d  50                   push eax
// 005b8e4e  b801000000           mov eax, 1
// 005b8e53  64892500000000       mov dword ptr fs:[0], esp
// 005b8e5a  8405cc7bc100         test byte ptr [0xc17bcc], al
// 005b8e60  7525                 jne 0x5b8e87
// 005b8e62  0905cc7bc100         or dword ptr [0xc17bcc], eax
// 005b8e68  b9e07ac100           mov ecx, 0xc17ae0
// 005b8e6d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8e75  e826101500           call 0x709ea0
// 005b8e7a  68e00e9e00           push 0x9e0ee0
// 005b8e7f  e8dffb1e00           call 0x7a8a63
// 005b8e84  83c404               add esp, 4
// 005b8e87  8b0c24               mov ecx, dword ptr [esp]
// 005b8e8a  b8e07ac100           mov eax, 0xc17ae0
// 005b8e8f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8e96  83c40c               add esp, 0xc
// 005b8e99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
