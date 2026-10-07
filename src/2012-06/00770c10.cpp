// roc 2012-06 00770c10  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770c10
//
// 00770c10  64a100000000         mov eax, dword ptr fs:[0]
// 00770c16  6aff                 push -1
// 00770c18  68fe3bac00           push 0xac3bfe
// 00770c1d  50                   push eax
// 00770c1e  b801000000           mov eax, 1
// 00770c23  64892500000000       mov dword ptr fs:[0], esp
// 00770c2a  84058c8de300         test byte ptr [0xe38d8c], al
// 00770c30  7525                 jne 0x770c57
// 00770c32  09058c8de300         or dword ptr [0xe38d8c], eax
// 00770c38  b9e08ce300           mov ecx, 0xe38ce0
// 00770c3d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770c45  e866f41700           call 0x8f00b0
// 00770c4a  6850aab100           push 0xb1aa50
// 00770c4f  e8a1252100           call 0x9831f5
// 00770c54  83c404               add esp, 4
// 00770c57  8b0c24               mov ecx, dword ptr [esp]
// 00770c5a  b8e08ce300           mov eax, 0xe38ce0
// 00770c5f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770c66  83c40c               add esp, 0xc
// 00770c69  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
