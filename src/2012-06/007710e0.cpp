// from server: 100% by auto
// roc 2012-06 007710e0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007710e0
//
// 007710e0  64a100000000         mov eax, dword ptr fs:[0]
// 007710e6  6aff                 push -1
// 007710e8  685e3dac00           push 0xac3d5e
// 007710ed  50                   push eax
// 007710ee  b801000000           mov eax, 1
// 007710f3  64892500000000       mov dword ptr fs:[0], esp
// 007710fa  84051c95e300         test byte ptr [0xe3951c], al
// 00771100  7525                 jne 0x771127
// 00771102  09051c95e300         or dword ptr [0xe3951c], eax
// 00771108  b97094e300           mov ecx, 0xe39470
// 0077110d  c744240800000000     mov dword ptr [esp + 8], 0
// 00771115  e876070b00           call 0x821890
// 0077111a  68a0a9b100           push 0xb1a9a0
// 0077111f  e8d1202100           call 0x9831f5
// 00771124  83c404               add esp, 4
// 00771127  8b0c24               mov ecx, dword ptr [esp]
// 0077112a  b87094e300           mov eax, 0xe39470
// 0077112f  64890d00000000       mov dword ptr fs:[0], ecx
// 00771136  83c40c               add esp, 0xc
// 00771139  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
