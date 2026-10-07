// roc 2010-06 005b87b0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b87b0
//
// 005b87b0  64a100000000         mov eax, dword ptr fs:[0]
// 005b87b6  6aff                 push -1
// 005b87b8  683e529900           push 0x99523e
// 005b87bd  50                   push eax
// 005b87be  b801000000           mov eax, 1
// 005b87c3  64892500000000       mov dword ptr fs:[0], esp
// 005b87ca  8405bc6dc100         test byte ptr [0xc16dbc], al
// 005b87d0  7525                 jne 0x5b87f7
// 005b87d2  0905bc6dc100         or dword ptr [0xc16dbc], eax
// 005b87d8  b9d06cc100           mov ecx, 0xc16cd0
// 005b87dd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b87e5  e8a6a51000           call 0x6c2d90
// 005b87ea  68d00f9e00           push 0x9e0fd0
// 005b87ef  e86f021f00           call 0x7a8a63
// 005b87f4  83c404               add esp, 4
// 005b87f7  8b0c24               mov ecx, dword ptr [esp]
// 005b87fa  b8d06cc100           mov eax, 0xc16cd0
// 005b87ff  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8806  83c40c               add esp, 0xc
// 005b8809  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
