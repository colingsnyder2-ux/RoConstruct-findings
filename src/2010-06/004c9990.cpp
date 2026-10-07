// roc 2010-06 004c9990  unit: RBX::Network::Players::W4ChatOption::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c9990
//
// 004c9990  64a100000000         mov eax, dword ptr fs:[0]
// 004c9996  6aff                 push -1
// 004c9998  686ea59800           push 0x98a56e
// 004c999d  50                   push eax
// 004c999e  b801000000           mov eax, 1
// 004c99a3  64892500000000       mov dword ptr fs:[0], esp
// 004c99aa  8405fc4bc000         test byte ptr [0xc04bfc], al
// 004c99b0  7525                 jne 0x4c99d7
// 004c99b2  0905fc4bc000         or dword ptr [0xc04bfc], eax
// 004c99b8  b9104bc000           mov ecx, 0xc04b10
// 004c99bd  c744240800000000     mov dword ptr [esp + 8], 0
// 004c99c5  e876fdffff           call 0x4c9740
// 004c99ca  6880cb9d00           push 0x9dcb80
// 004c99cf  e88ff02d00           call 0x7a8a63
// 004c99d4  83c404               add esp, 4
// 004c99d7  8b0c24               mov ecx, dword ptr [esp]
// 004c99da  b8104bc000           mov eax, 0xc04b10
// 004c99df  64890d00000000       mov dword ptr fs:[0], ecx
// 004c99e6  83c40c               add esp, 0xc
// 004c99e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
