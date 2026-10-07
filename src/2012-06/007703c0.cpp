// roc 2012-06 007703c0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007703c0
//
// 007703c0  64a100000000         mov eax, dword ptr fs:[0]
// 007703c6  6aff                 push -1
// 007703c8  689e39ac00           push 0xac399e
// 007703cd  50                   push eax
// 007703ce  b801000000           mov eax, 1
// 007703d3  64892500000000       mov dword ptr fs:[0], esp
// 007703da  84057c80e300         test byte ptr [0xe3807c], al
// 007703e0  7525                 jne 0x770407
// 007703e2  09057c80e300         or dword ptr [0xe3807c], eax
// 007703e8  b9d07fe300           mov ecx, 0xe37fd0
// 007703ed  c744240800000000     mov dword ptr [esp + 8], 0
// 007703f5  e856aa0700           call 0x7eae50
// 007703fa  6880abb100           push 0xb1ab80
// 007703ff  e8f12d2100           call 0x9831f5
// 00770404  83c404               add esp, 4
// 00770407  8b0c24               mov ecx, dword ptr [esp]
// 0077040a  b8d07fe300           mov eax, 0xe37fd0
// 0077040f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770416  83c40c               add esp, 0xc
// 00770419  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
