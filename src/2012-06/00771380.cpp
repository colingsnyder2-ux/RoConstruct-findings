// roc 2012-06 00771380  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00771380
//
// 00771380  64a100000000         mov eax, dword ptr fs:[0]
// 00771386  6aff                 push -1
// 00771388  681e3eac00           push 0xac3e1e
// 0077138d  50                   push eax
// 0077138e  b801000000           mov eax, 1
// 00771393  64892500000000       mov dword ptr fs:[0], esp
// 0077139a  84053c99e300         test byte ptr [0xe3993c], al
// 007713a0  7525                 jne 0x7713c7
// 007713a2  09053c99e300         or dword ptr [0xe3993c], eax
// 007713a8  b99098e300           mov ecx, 0xe39890
// 007713ad  c744240800000000     mov dword ptr [esp + 8], 0
// 007713b5  e8e6500500           call 0x7c64a0
// 007713ba  6840a9b100           push 0xb1a940
// 007713bf  e8311e2100           call 0x9831f5
// 007713c4  83c404               add esp, 4
// 007713c7  8b0c24               mov ecx, dword ptr [esp]
// 007713ca  b89098e300           mov eax, 0xe39890
// 007713cf  64890d00000000       mov dword ptr fs:[0], ecx
// 007713d6  83c40c               add esp, 0xc
// 007713d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
