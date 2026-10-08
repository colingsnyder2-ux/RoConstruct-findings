// from server: 100% by auto
// roc 2012-06 00770430  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770430
//
// 00770430  64a100000000         mov eax, dword ptr fs:[0]
// 00770436  6aff                 push -1
// 00770438  68be39ac00           push 0xac39be
// 0077043d  50                   push eax
// 0077043e  b801000000           mov eax, 1
// 00770443  64892500000000       mov dword ptr fs:[0], esp
// 0077044a  84052c81e300         test byte ptr [0xe3812c], al
// 00770450  7525                 jne 0x770477
// 00770452  09052c81e300         or dword ptr [0xe3812c], eax
// 00770458  b98080e300           mov ecx, 0xe38080
// 0077045d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770465  e856ab0700           call 0x7eafc0
// 0077046a  6870abb100           push 0xb1ab70
// 0077046f  e8812d2100           call 0x9831f5
// 00770474  83c404               add esp, 4
// 00770477  8b0c24               mov ecx, dword ptr [esp]
// 0077047a  b88080e300           mov eax, 0xe38080
// 0077047f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770486  83c40c               add esp, 0xc
// 00770489  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
