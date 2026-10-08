// from server: 100% by auto
// roc 2012-06 00770a50  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770a50
//
// 00770a50  64a100000000         mov eax, dword ptr fs:[0]
// 00770a56  6aff                 push -1
// 00770a58  687e3bac00           push 0xac3b7e
// 00770a5d  50                   push eax
// 00770a5e  b801000000           mov eax, 1
// 00770a63  64892500000000       mov dword ptr fs:[0], esp
// 00770a6a  8405cc8ae300         test byte ptr [0xe38acc], al
// 00770a70  7525                 jne 0x770a97
// 00770a72  0905cc8ae300         or dword ptr [0xe38acc], eax
// 00770a78  b9208ae300           mov ecx, 0xe38a20
// 00770a7d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770a85  e806f51700           call 0x8eff90
// 00770a8a  6890aab100           push 0xb1aa90
// 00770a8f  e861272100           call 0x9831f5
// 00770a94  83c404               add esp, 4
// 00770a97  8b0c24               mov ecx, dword ptr [esp]
// 00770a9a  b8208ae300           mov eax, 0xe38a20
// 00770a9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770aa6  83c40c               add esp, 0xc
// 00770aa9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
