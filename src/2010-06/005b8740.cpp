// roc 2010-06 005b8740  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8740
//
// 005b8740  64a100000000         mov eax, dword ptr fs:[0]
// 005b8746  6aff                 push -1
// 005b8748  681e529900           push 0x99521e
// 005b874d  50                   push eax
// 005b874e  b801000000           mov eax, 1
// 005b8753  64892500000000       mov dword ptr fs:[0], esp
// 005b875a  8405cc6cc100         test byte ptr [0xc16ccc], al
// 005b8760  7525                 jne 0x5b8787
// 005b8762  0905cc6cc100         or dword ptr [0xc16ccc], eax
// 005b8768  b9e06bc100           mov ecx, 0xc16be0
// 005b876d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8775  e896a71000           call 0x6c2f10
// 005b877a  68e00f9e00           push 0x9e0fe0
// 005b877f  e8df021f00           call 0x7a8a63
// 005b8784  83c404               add esp, 4
// 005b8787  8b0c24               mov ecx, dword ptr [esp]
// 005b878a  b8e06bc100           mov eax, 0xc16be0
// 005b878f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8796  83c40c               add esp, 0xc
// 005b8799  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
