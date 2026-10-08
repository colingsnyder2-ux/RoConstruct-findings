// from server: 100% by auto
// roc 2010-06 005b8a50  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8a50
//
// 005b8a50  64a100000000         mov eax, dword ptr fs:[0]
// 005b8a56  6aff                 push -1
// 005b8a58  68fe529900           push 0x9952fe
// 005b8a5d  50                   push eax
// 005b8a5e  b801000000           mov eax, 1
// 005b8a63  64892500000000       mov dword ptr fs:[0], esp
// 005b8a6a  84055c73c100         test byte ptr [0xc1735c], al
// 005b8a70  7525                 jne 0x5b8a97
// 005b8a72  09055c73c100         or dword ptr [0xc1735c], eax
// 005b8a78  b97072c100           mov ecx, 0xc17270
// 005b8a7d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8a85  e896850600           call 0x621020
// 005b8a8a  68700f9e00           push 0x9e0f70
// 005b8a8f  e8cfff1e00           call 0x7a8a63
// 005b8a94  83c404               add esp, 4
// 005b8a97  8b0c24               mov ecx, dword ptr [esp]
// 005b8a9a  b87072c100           mov eax, 0xc17270
// 005b8a9f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8aa6  83c40c               add esp, 0xc
// 005b8aa9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
