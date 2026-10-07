// roc 2010-06 005b8970  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8970
//
// 005b8970  64a100000000         mov eax, dword ptr fs:[0]
// 005b8976  6aff                 push -1
// 005b8978  68be529900           push 0x9952be
// 005b897d  50                   push eax
// 005b897e  b801000000           mov eax, 1
// 005b8983  64892500000000       mov dword ptr fs:[0], esp
// 005b898a  84057c71c100         test byte ptr [0xc1717c], al
// 005b8990  7525                 jne 0x5b89b7
// 005b8992  09057c71c100         or dword ptr [0xc1717c], eax
// 005b8998  b99070c100           mov ecx, 0xc17090
// 005b899d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b89a5  e826131500           call 0x709cd0
// 005b89aa  68900f9e00           push 0x9e0f90
// 005b89af  e8af001f00           call 0x7a8a63
// 005b89b4  83c404               add esp, 4
// 005b89b7  8b0c24               mov ecx, dword ptr [esp]
// 005b89ba  b89070c100           mov eax, 0xc17090
// 005b89bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b89c6  83c40c               add esp, 0xc
// 005b89c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
