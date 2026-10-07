// roc 2010-06 005b8ba0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8ba0
//
// 005b8ba0  64a100000000         mov eax, dword ptr fs:[0]
// 005b8ba6  6aff                 push -1
// 005b8ba8  685e539900           push 0x99535e
// 005b8bad  50                   push eax
// 005b8bae  b801000000           mov eax, 1
// 005b8bb3  64892500000000       mov dword ptr fs:[0], esp
// 005b8bba  84052c76c100         test byte ptr [0xc1762c], al
// 005b8bc0  7525                 jne 0x5b8be7
// 005b8bc2  09052c76c100         or dword ptr [0xc1762c], eax
// 005b8bc8  b94075c100           mov ecx, 0xc17540
// 005b8bcd  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8bd5  e886050a00           call 0x659160
// 005b8bda  68400f9e00           push 0x9e0f40
// 005b8bdf  e87ffe1e00           call 0x7a8a63
// 005b8be4  83c404               add esp, 4
// 005b8be7  8b0c24               mov ecx, dword ptr [esp]
// 005b8bea  b84075c100           mov eax, 0xc17540
// 005b8bef  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8bf6  83c40c               add esp, 0xc
// 005b8bf9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
