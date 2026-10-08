// from server: 100% by auto
// roc 2012-06 00770dd0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770dd0
//
// 00770dd0  64a100000000         mov eax, dword ptr fs:[0]
// 00770dd6  6aff                 push -1
// 00770dd8  687e3cac00           push 0xac3c7e
// 00770ddd  50                   push eax
// 00770dde  b801000000           mov eax, 1
// 00770de3  64892500000000       mov dword ptr fs:[0], esp
// 00770dea  84054c90e300         test byte ptr [0xe3904c], al
// 00770df0  7525                 jne 0x770e17
// 00770df2  09054c90e300         or dword ptr [0xe3904c], eax
// 00770df8  b9a08fe300           mov ecx, 0xe38fa0
// 00770dfd  c744240800000000     mov dword ptr [esp + 8], 0
// 00770e05  e846c51600           call 0x8dd350
// 00770e0a  6810aab100           push 0xb1aa10
// 00770e0f  e8e1232100           call 0x9831f5
// 00770e14  83c404               add esp, 4
// 00770e17  8b0c24               mov ecx, dword ptr [esp]
// 00770e1a  b8a08fe300           mov eax, 0xe38fa0
// 00770e1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770e26  83c40c               add esp, 0xc
// 00770e29  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
