// from server: 100% by auto
// roc 2010-06 005b9070  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b9070
//
// 005b9070  64a100000000         mov eax, dword ptr fs:[0]
// 005b9076  6aff                 push -1
// 005b9078  68be549900           push 0x9954be
// 005b907d  50                   push eax
// 005b907e  b801000000           mov eax, 1
// 005b9083  64892500000000       mov dword ptr fs:[0], esp
// 005b908a  84057c80c100         test byte ptr [0xc1807c], al
// 005b9090  7525                 jne 0x5b90b7
// 005b9092  09057c80c100         or dword ptr [0xc1807c], eax
// 005b9098  b9907fc100           mov ecx, 0xc17f90
// 005b909d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b90a5  e8b6c21300           call 0x6f5360
// 005b90aa  68900e9e00           push 0x9e0e90
// 005b90af  e8aff91e00           call 0x7a8a63
// 005b90b4  83c404               add esp, 4
// 005b90b7  8b0c24               mov ecx, dword ptr [esp]
// 005b90ba  b8907fc100           mov eax, 0xc17f90
// 005b90bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b90c6  83c40c               add esp, 0xc
// 005b90c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
