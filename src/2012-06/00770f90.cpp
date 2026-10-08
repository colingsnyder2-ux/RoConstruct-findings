// from server: 100% by auto
// roc 2012-06 00770f90  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770f90
//
// 00770f90  64a100000000         mov eax, dword ptr fs:[0]
// 00770f96  6aff                 push -1
// 00770f98  68fe3cac00           push 0xac3cfe
// 00770f9d  50                   push eax
// 00770f9e  b801000000           mov eax, 1
// 00770fa3  64892500000000       mov dword ptr fs:[0], esp
// 00770faa  84050c93e300         test byte ptr [0xe3930c], al
// 00770fb0  7525                 jne 0x770fd7
// 00770fb2  09050c93e300         or dword ptr [0xe3930c], eax
// 00770fb8  b96092e300           mov ecx, 0xe39260
// 00770fbd  c744240800000000     mov dword ptr [esp + 8], 0
// 00770fc5  e8769e1000           call 0x87ae40
// 00770fca  68d0a9b100           push 0xb1a9d0
// 00770fcf  e821222100           call 0x9831f5
// 00770fd4  83c404               add esp, 4
// 00770fd7  8b0c24               mov ecx, dword ptr [esp]
// 00770fda  b86092e300           mov eax, 0xe39260
// 00770fdf  64890d00000000       mov dword ptr fs:[0], ecx
// 00770fe6  83c40c               add esp, 0xc
// 00770fe9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
