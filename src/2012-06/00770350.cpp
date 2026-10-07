// roc 2012-06 00770350  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770350
//
// 00770350  64a100000000         mov eax, dword ptr fs:[0]
// 00770356  6aff                 push -1
// 00770358  687e39ac00           push 0xac397e
// 0077035d  50                   push eax
// 0077035e  b801000000           mov eax, 1
// 00770363  64892500000000       mov dword ptr fs:[0], esp
// 0077036a  8405cc7fe300         test byte ptr [0xe37fcc], al
// 00770370  7525                 jne 0x770397
// 00770372  0905cc7fe300         or dword ptr [0xe37fcc], eax
// 00770378  b9207fe300           mov ecx, 0xe37f20
// 0077037d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770385  e886021800           call 0x8f0610
// 0077038a  6890abb100           push 0xb1ab90
// 0077038f  e8612e2100           call 0x9831f5
// 00770394  83c404               add esp, 4
// 00770397  8b0c24               mov ecx, dword ptr [esp]
// 0077039a  b8207fe300           mov eax, 0xe37f20
// 0077039f  64890d00000000       mov dword ptr fs:[0], ecx
// 007703a6  83c40c               add esp, 0xc
// 007703a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
