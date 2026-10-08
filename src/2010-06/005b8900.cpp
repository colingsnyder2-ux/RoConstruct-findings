// from server: 100% by auto
// roc 2010-06 005b8900  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8900
//
// 005b8900  64a100000000         mov eax, dword ptr fs:[0]
// 005b8906  6aff                 push -1
// 005b8908  689e529900           push 0x99529e
// 005b890d  50                   push eax
// 005b890e  b801000000           mov eax, 1
// 005b8913  64892500000000       mov dword ptr fs:[0], esp
// 005b891a  84058c70c100         test byte ptr [0xc1708c], al
// 005b8920  7525                 jne 0x5b8947
// 005b8922  09058c70c100         or dword ptr [0xc1708c], eax
// 005b8928  b9a06fc100           mov ecx, 0xc16fa0
// 005b892d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8935  e896111500           call 0x709ad0
// 005b893a  68a00f9e00           push 0x9e0fa0
// 005b893f  e81f011f00           call 0x7a8a63
// 005b8944  83c404               add esp, 4
// 005b8947  8b0c24               mov ecx, dword ptr [esp]
// 005b894a  b8a06fc100           mov eax, 0xc16fa0
// 005b894f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8956  83c40c               add esp, 0xc
// 005b8959  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
