// from server: 100% by auto
// roc 2012-06 00770c80  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770c80
//
// 00770c80  64a100000000         mov eax, dword ptr fs:[0]
// 00770c86  6aff                 push -1
// 00770c88  681e3cac00           push 0xac3c1e
// 00770c8d  50                   push eax
// 00770c8e  b801000000           mov eax, 1
// 00770c93  64892500000000       mov dword ptr fs:[0], esp
// 00770c9a  84053c8ee300         test byte ptr [0xe38e3c], al
// 00770ca0  7525                 jne 0x770cc7
// 00770ca2  09053c8ee300         or dword ptr [0xe38e3c], eax
// 00770ca8  b9908de300           mov ecx, 0xe38d90
// 00770cad  c744240800000000     mov dword ptr [esp + 8], 0
// 00770cb5  e896f51700           call 0x8f0250
// 00770cba  6840aab100           push 0xb1aa40
// 00770cbf  e831252100           call 0x9831f5
// 00770cc4  83c404               add esp, 4
// 00770cc7  8b0c24               mov ecx, dword ptr [esp]
// 00770cca  b8908de300           mov eax, 0xe38d90
// 00770ccf  64890d00000000       mov dword ptr fs:[0], ecx
// 00770cd6  83c40c               add esp, 0xc
// 00770cd9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
