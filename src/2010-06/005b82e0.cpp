// from server: 100% by auto
// roc 2010-06 005b82e0  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b82e0
//
// 005b82e0  64a100000000         mov eax, dword ptr fs:[0]
// 005b82e6  6aff                 push -1
// 005b82e8  68de509900           push 0x9950de
// 005b82ed  50                   push eax
// 005b82ee  b801000000           mov eax, 1
// 005b82f3  64892500000000       mov dword ptr fs:[0], esp
// 005b82fa  84056c63c100         test byte ptr [0xc1636c], al
// 005b8300  7525                 jne 0x5b8327
// 005b8302  09056c63c100         or dword ptr [0xc1636c], eax
// 005b8308  b98062c100           mov ecx, 0xc16280
// 005b830d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8315  e8f6ea1400           call 0x706e10
// 005b831a  6880109e00           push 0x9e1080
// 005b831f  e83f071f00           call 0x7a8a63
// 005b8324  83c404               add esp, 4
// 005b8327  8b0c24               mov ecx, dword ptr [esp]
// 005b832a  b88062c100           mov eax, 0xc16280
// 005b832f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8336  83c40c               add esp, 0xc
// 005b8339  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
