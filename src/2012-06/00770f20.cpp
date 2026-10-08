// from server: 100% by auto
// roc 2012-06 00770f20  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770f20
//
// 00770f20  64a100000000         mov eax, dword ptr fs:[0]
// 00770f26  6aff                 push -1
// 00770f28  68de3cac00           push 0xac3cde
// 00770f2d  50                   push eax
// 00770f2e  b801000000           mov eax, 1
// 00770f33  64892500000000       mov dword ptr fs:[0], esp
// 00770f3a  84055c92e300         test byte ptr [0xe3925c], al
// 00770f40  7525                 jne 0x770f67
// 00770f42  09055c92e300         or dword ptr [0xe3925c], eax
// 00770f48  b9b091e300           mov ecx, 0xe391b0
// 00770f4d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770f55  e8163cfeff           call 0x754b70
// 00770f5a  68e0a9b100           push 0xb1a9e0
// 00770f5f  e891222100           call 0x9831f5
// 00770f64  83c404               add esp, 4
// 00770f67  8b0c24               mov ecx, dword ptr [esp]
// 00770f6a  b8b091e300           mov eax, 0xe391b0
// 00770f6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770f76  83c40c               add esp, 0xc
// 00770f79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
