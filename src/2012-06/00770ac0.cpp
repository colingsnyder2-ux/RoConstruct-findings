// from server: 100% by auto
// roc 2012-06 00770ac0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770ac0
//
// 00770ac0  64a100000000         mov eax, dword ptr fs:[0]
// 00770ac6  6aff                 push -1
// 00770ac8  689e3bac00           push 0xac3b9e
// 00770acd  50                   push eax
// 00770ace  b801000000           mov eax, 1
// 00770ad3  64892500000000       mov dword ptr fs:[0], esp
// 00770ada  84057c8be300         test byte ptr [0xe38b7c], al
// 00770ae0  7525                 jne 0x770b07
// 00770ae2  09057c8be300         or dword ptr [0xe38b7c], eax
// 00770ae8  b9d08ae300           mov ecx, 0xe38ad0
// 00770aed  c744240800000000     mov dword ptr [esp + 8], 0
// 00770af5  e8c67e0300           call 0x7a89c0
// 00770afa  6880aab100           push 0xb1aa80
// 00770aff  e8f1262100           call 0x9831f5
// 00770b04  83c404               add esp, 4
// 00770b07  8b0c24               mov ecx, dword ptr [esp]
// 00770b0a  b8d08ae300           mov eax, 0xe38ad0
// 00770b0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770b16  83c40c               add esp, 0xc
// 00770b19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
