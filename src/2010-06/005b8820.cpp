// from server: 100% by auto
// roc 2010-06 005b8820  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8820
//
// 005b8820  64a100000000         mov eax, dword ptr fs:[0]
// 005b8826  6aff                 push -1
// 005b8828  685e529900           push 0x99525e
// 005b882d  50                   push eax
// 005b882e  b801000000           mov eax, 1
// 005b8833  64892500000000       mov dword ptr fs:[0], esp
// 005b883a  8405ac6ec100         test byte ptr [0xc16eac], al
// 005b8840  7525                 jne 0x5b8867
// 005b8842  0905ac6ec100         or dword ptr [0xc16eac], eax
// 005b8848  b9c06dc100           mov ecx, 0xc16dc0
// 005b884d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8855  e8b6a31000           call 0x6c2c10
// 005b885a  68c00f9e00           push 0x9e0fc0
// 005b885f  e8ff011f00           call 0x7a8a63
// 005b8864  83c404               add esp, 4
// 005b8867  8b0c24               mov ecx, dword ptr [esp]
// 005b886a  b8c06dc100           mov eax, 0xc16dc0
// 005b886f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8876  83c40c               add esp, 0xc
// 005b8879  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
