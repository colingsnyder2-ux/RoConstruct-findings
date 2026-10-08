// from server: 100% by auto
// roc 2012-06 00770740  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770740
//
// 00770740  64a100000000         mov eax, dword ptr fs:[0]
// 00770746  6aff                 push -1
// 00770748  689e3aac00           push 0xac3a9e
// 0077074d  50                   push eax
// 0077074e  b801000000           mov eax, 1
// 00770753  64892500000000       mov dword ptr fs:[0], esp
// 0077075a  8405fc85e300         test byte ptr [0xe385fc], al
// 00770760  7525                 jne 0x770787
// 00770762  0905fc85e300         or dword ptr [0xe385fc], eax
// 00770768  b95085e300           mov ecx, 0xe38550
// 0077076d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770775  e8168f1200           call 0x899690
// 0077077a  6800abb100           push 0xb1ab00
// 0077077f  e8712a2100           call 0x9831f5
// 00770784  83c404               add esp, 4
// 00770787  8b0c24               mov ecx, dword ptr [esp]
// 0077078a  b85085e300           mov eax, 0xe38550
// 0077078f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770796  83c40c               add esp, 0xc
// 00770799  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
