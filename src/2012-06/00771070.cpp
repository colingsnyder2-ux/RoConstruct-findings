// roc 2012-06 00771070  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00771070
//
// 00771070  64a100000000         mov eax, dword ptr fs:[0]
// 00771076  6aff                 push -1
// 00771078  683e3dac00           push 0xac3d3e
// 0077107d  50                   push eax
// 0077107e  b801000000           mov eax, 1
// 00771083  64892500000000       mov dword ptr fs:[0], esp
// 0077108a  84056c94e300         test byte ptr [0xe3946c], al
// 00771090  7525                 jne 0x7710b7
// 00771092  09056c94e300         or dword ptr [0xe3946c], eax
// 00771098  b9c093e300           mov ecx, 0xe393c0
// 0077109d  c744240800000000     mov dword ptr [esp + 8], 0
// 007710a5  e8e6690a00           call 0x817a90
// 007710aa  68b0a9b100           push 0xb1a9b0
// 007710af  e841212100           call 0x9831f5
// 007710b4  83c404               add esp, 4
// 007710b7  8b0c24               mov ecx, dword ptr [esp]
// 007710ba  b8c093e300           mov eax, 0xe393c0
// 007710bf  64890d00000000       mov dword ptr fs:[0], ecx
// 007710c6  83c40c               add esp, 0xc
// 007710c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
