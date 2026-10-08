// from server: 100% by auto
// roc 2010-06 005b8430  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8430
//
// 005b8430  64a100000000         mov eax, dword ptr fs:[0]
// 005b8436  6aff                 push -1
// 005b8438  683e519900           push 0x99513e
// 005b843d  50                   push eax
// 005b843e  b801000000           mov eax, 1
// 005b8443  64892500000000       mov dword ptr fs:[0], esp
// 005b844a  84053c66c100         test byte ptr [0xc1663c], al
// 005b8450  7525                 jne 0x5b8477
// 005b8452  09053c66c100         or dword ptr [0xc1663c], eax
// 005b8458  b95065c100           mov ecx, 0xc16550
// 005b845d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8465  e866f51400           call 0x7079d0
// 005b846a  6850109e00           push 0x9e1050
// 005b846f  e8ef051f00           call 0x7a8a63
// 005b8474  83c404               add esp, 4
// 005b8477  8b0c24               mov ecx, dword ptr [esp]
// 005b847a  b85065c100           mov eax, 0xc16550
// 005b847f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8486  83c40c               add esp, 0xc
// 005b8489  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
