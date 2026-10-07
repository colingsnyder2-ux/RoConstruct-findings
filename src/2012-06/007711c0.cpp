// roc 2012-06 007711c0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007711c0
//
// 007711c0  64a100000000         mov eax, dword ptr fs:[0]
// 007711c6  6aff                 push -1
// 007711c8  689e3dac00           push 0xac3d9e
// 007711cd  50                   push eax
// 007711ce  b801000000           mov eax, 1
// 007711d3  64892500000000       mov dword ptr fs:[0], esp
// 007711da  84057c96e300         test byte ptr [0xe3967c], al
// 007711e0  7525                 jne 0x771207
// 007711e2  09057c96e300         or dword ptr [0xe3967c], eax
// 007711e8  b9d095e300           mov ecx, 0xe395d0
// 007711ed  c744240800000000     mov dword ptr [esp + 8], 0
// 007711f5  e8e6741500           call 0x8c86e0
// 007711fa  6880a9b100           push 0xb1a980
// 007711ff  e8f11f2100           call 0x9831f5
// 00771204  83c404               add esp, 4
// 00771207  8b0c24               mov ecx, dword ptr [esp]
// 0077120a  b8d095e300           mov eax, 0xe395d0
// 0077120f  64890d00000000       mov dword ptr fs:[0], ecx
// 00771216  83c40c               add esp, 0xc
// 00771219  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
