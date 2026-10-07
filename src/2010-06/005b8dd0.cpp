// roc 2010-06 005b8dd0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8dd0
//
// 005b8dd0  64a100000000         mov eax, dword ptr fs:[0]
// 005b8dd6  6aff                 push -1
// 005b8dd8  68fe539900           push 0x9953fe
// 005b8ddd  50                   push eax
// 005b8dde  b801000000           mov eax, 1
// 005b8de3  64892500000000       mov dword ptr fs:[0], esp
// 005b8dea  8405dc7ac100         test byte ptr [0xc17adc], al
// 005b8df0  7525                 jne 0x5b8e17
// 005b8df2  0905dc7ac100         or dword ptr [0xc17adc], eax
// 005b8df8  b9f079c100           mov ecx, 0xc179f0
// 005b8dfd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8e05  e836be1100           call 0x6d4c40
// 005b8e0a  68f00e9e00           push 0x9e0ef0
// 005b8e0f  e84ffc1e00           call 0x7a8a63
// 005b8e14  83c404               add esp, 4
// 005b8e17  8b0c24               mov ecx, dword ptr [esp]
// 005b8e1a  b8f079c100           mov eax, 0xc179f0
// 005b8e1f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8e26  83c40c               add esp, 0xc
// 005b8e29  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
