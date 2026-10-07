// roc 2010-06 005b8b30  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8b30
//
// 005b8b30  64a100000000         mov eax, dword ptr fs:[0]
// 005b8b36  6aff                 push -1
// 005b8b38  683e539900           push 0x99533e
// 005b8b3d  50                   push eax
// 005b8b3e  b801000000           mov eax, 1
// 005b8b43  64892500000000       mov dword ptr fs:[0], esp
// 005b8b4a  84053c75c100         test byte ptr [0xc1753c], al
// 005b8b50  7525                 jne 0x5b8b77
// 005b8b52  09053c75c100         or dword ptr [0xc1753c], eax
// 005b8b58  b95074c100           mov ecx, 0xc17450
// 005b8b5d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8b65  e896e61400           call 0x707200
// 005b8b6a  68500f9e00           push 0x9e0f50
// 005b8b6f  e8effe1e00           call 0x7a8a63
// 005b8b74  83c404               add esp, 4
// 005b8b77  8b0c24               mov ecx, dword ptr [esp]
// 005b8b7a  b85074c100           mov eax, 0xc17450
// 005b8b7f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8b86  83c40c               add esp, 0xc
// 005b8b89  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
