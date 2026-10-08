// from server: 100% by auto
// roc 2010-06 005b8350  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8350
//
// 005b8350  64a100000000         mov eax, dword ptr fs:[0]
// 005b8356  6aff                 push -1
// 005b8358  68fe509900           push 0x9950fe
// 005b835d  50                   push eax
// 005b835e  b801000000           mov eax, 1
// 005b8363  64892500000000       mov dword ptr fs:[0], esp
// 005b836a  84055c64c100         test byte ptr [0xc1645c], al
// 005b8370  7525                 jne 0x5b8397
// 005b8372  09055c64c100         or dword ptr [0xc1645c], eax
// 005b8378  b97063c100           mov ecx, 0xc16370
// 005b837d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8385  e8864a0900           call 0x64ce10
// 005b838a  6870109e00           push 0x9e1070
// 005b838f  e8cf061f00           call 0x7a8a63
// 005b8394  83c404               add esp, 4
// 005b8397  8b0c24               mov ecx, dword ptr [esp]
// 005b839a  b87063c100           mov eax, 0xc16370
// 005b839f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b83a6  83c40c               add esp, 0xc
// 005b83a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
