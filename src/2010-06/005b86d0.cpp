// from server: 100% by auto
// roc 2010-06 005b86d0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b86d0
//
// 005b86d0  64a100000000         mov eax, dword ptr fs:[0]
// 005b86d6  6aff                 push -1
// 005b86d8  68fe519900           push 0x9951fe
// 005b86dd  50                   push eax
// 005b86de  b801000000           mov eax, 1
// 005b86e3  64892500000000       mov dword ptr fs:[0], esp
// 005b86ea  8405dc6bc100         test byte ptr [0xc16bdc], al
// 005b86f0  7525                 jne 0x5b8717
// 005b86f2  0905dc6bc100         or dword ptr [0xc16bdc], eax
// 005b86f8  b9f06ac100           mov ecx, 0xc16af0
// 005b86fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8705  e8e696fdff           call 0x591df0
// 005b870a  68f00f9e00           push 0x9e0ff0
// 005b870f  e84f031f00           call 0x7a8a63
// 005b8714  83c404               add esp, 4
// 005b8717  8b0c24               mov ecx, dword ptr [esp]
// 005b871a  b8f06ac100           mov eax, 0xc16af0
// 005b871f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8726  83c40c               add esp, 0xc
// 005b8729  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
