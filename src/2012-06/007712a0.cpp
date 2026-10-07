// roc 2012-06 007712a0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007712a0
//
// 007712a0  64a100000000         mov eax, dword ptr fs:[0]
// 007712a6  6aff                 push -1
// 007712a8  68de3dac00           push 0xac3dde
// 007712ad  50                   push eax
// 007712ae  b801000000           mov eax, 1
// 007712b3  64892500000000       mov dword ptr fs:[0], esp
// 007712ba  8405dc97e300         test byte ptr [0xe397dc], al
// 007712c0  7525                 jne 0x7712e7
// 007712c2  0905dc97e300         or dword ptr [0xe397dc], eax
// 007712c8  b93097e300           mov ecx, 0xe39730
// 007712cd  c744240800000000     mov dword ptr [esp + 8], 0
// 007712d5  e8964e0500           call 0x7c6170
// 007712da  6860a9b100           push 0xb1a960
// 007712df  e8111f2100           call 0x9831f5
// 007712e4  83c404               add esp, 4
// 007712e7  8b0c24               mov ecx, dword ptr [esp]
// 007712ea  b83097e300           mov eax, 0xe39730
// 007712ef  64890d00000000       mov dword ptr fs:[0], ecx
// 007712f6  83c40c               add esp, 0xc
// 007712f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
