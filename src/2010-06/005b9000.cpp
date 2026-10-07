// roc 2010-06 005b9000  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b9000
//
// 005b9000  64a100000000         mov eax, dword ptr fs:[0]
// 005b9006  6aff                 push -1
// 005b9008  689e549900           push 0x99549e
// 005b900d  50                   push eax
// 005b900e  b801000000           mov eax, 1
// 005b9013  64892500000000       mov dword ptr fs:[0], esp
// 005b901a  84058c7fc100         test byte ptr [0xc17f8c], al
// 005b9020  7525                 jne 0x5b9047
// 005b9022  09058c7fc100         or dword ptr [0xc17f8c], eax
// 005b9028  b9a07ec100           mov ecx, 0xc17ea0
// 005b902d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b9035  e8366b0400           call 0x5ffb70
// 005b903a  68a00e9e00           push 0x9e0ea0
// 005b903f  e81ffa1e00           call 0x7a8a63
// 005b9044  83c404               add esp, 4
// 005b9047  8b0c24               mov ecx, dword ptr [esp]
// 005b904a  b8a07ec100           mov eax, 0xc17ea0
// 005b904f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b9056  83c40c               add esp, 0xc
// 005b9059  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
