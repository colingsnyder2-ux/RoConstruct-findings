// from server: 100% by auto
// roc 2010-06 005b90e0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b90e0
//
// 005b90e0  64a100000000         mov eax, dword ptr fs:[0]
// 005b90e6  6aff                 push -1
// 005b90e8  68de549900           push 0x9954de
// 005b90ed  50                   push eax
// 005b90ee  b801000000           mov eax, 1
// 005b90f3  64892500000000       mov dword ptr fs:[0], esp
// 005b90fa  84056c81c100         test byte ptr [0xc1816c], al
// 005b9100  7525                 jne 0x5b9127
// 005b9102  09056c81c100         or dword ptr [0xc1816c], eax
// 005b9108  b98080c100           mov ecx, 0xc18080
// 005b910d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b9115  e886441000           call 0x6bd5a0
// 005b911a  68800e9e00           push 0x9e0e80
// 005b911f  e83ff91e00           call 0x7a8a63
// 005b9124  83c404               add esp, 4
// 005b9127  8b0c24               mov ecx, dword ptr [esp]
// 005b912a  b88080c100           mov eax, 0xc18080
// 005b912f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b9136  83c40c               add esp, 0xc
// 005b9139  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
