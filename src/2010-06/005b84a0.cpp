// from server: 100% by auto
// roc 2010-06 005b84a0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b84a0
//
// 005b84a0  64a100000000         mov eax, dword ptr fs:[0]
// 005b84a6  6aff                 push -1
// 005b84a8  685e519900           push 0x99515e
// 005b84ad  50                   push eax
// 005b84ae  b801000000           mov eax, 1
// 005b84b3  64892500000000       mov dword ptr fs:[0], esp
// 005b84ba  84052c67c100         test byte ptr [0xc1672c], al
// 005b84c0  7525                 jne 0x5b84e7
// 005b84c2  09052c67c100         or dword ptr [0xc1672c], eax
// 005b84c8  b94066c100           mov ecx, 0xc16640
// 005b84cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b84d5  e876f61400           call 0x707b50
// 005b84da  6840109e00           push 0x9e1040
// 005b84df  e87f051f00           call 0x7a8a63
// 005b84e4  83c404               add esp, 4
// 005b84e7  8b0c24               mov ecx, dword ptr [esp]
// 005b84ea  b84066c100           mov eax, 0xc16640
// 005b84ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005b84f6  83c40c               add esp, 0xc
// 005b84f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
