// roc 2010-06 005b8f90  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8f90
//
// 005b8f90  64a100000000         mov eax, dword ptr fs:[0]
// 005b8f96  6aff                 push -1
// 005b8f98  687e549900           push 0x99547e
// 005b8f9d  50                   push eax
// 005b8f9e  b801000000           mov eax, 1
// 005b8fa3  64892500000000       mov dword ptr fs:[0], esp
// 005b8faa  84059c7ec100         test byte ptr [0xc17e9c], al
// 005b8fb0  7525                 jne 0x5b8fd7
// 005b8fb2  09059c7ec100         or dword ptr [0xc17e9c], eax
// 005b8fb8  b9b07dc100           mov ecx, 0xc17db0
// 005b8fbd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8fc5  e8a61d0800           call 0x63ad70
// 005b8fca  68b00e9e00           push 0x9e0eb0
// 005b8fcf  e88ffa1e00           call 0x7a8a63
// 005b8fd4  83c404               add esp, 4
// 005b8fd7  8b0c24               mov ecx, dword ptr [esp]
// 005b8fda  b8b07dc100           mov eax, 0xc17db0
// 005b8fdf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8fe6  83c40c               add esp, 0xc
// 005b8fe9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
