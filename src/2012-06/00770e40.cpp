// from server: 100% by auto
// roc 2012-06 00770e40  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770e40
//
// 00770e40  64a100000000         mov eax, dword ptr fs:[0]
// 00770e46  6aff                 push -1
// 00770e48  689e3cac00           push 0xac3c9e
// 00770e4d  50                   push eax
// 00770e4e  b801000000           mov eax, 1
// 00770e53  64892500000000       mov dword ptr fs:[0], esp
// 00770e5a  8405fc90e300         test byte ptr [0xe390fc], al
// 00770e60  7525                 jne 0x770e87
// 00770e62  0905fc90e300         or dword ptr [0xe390fc], eax
// 00770e68  b95090e300           mov ecx, 0xe39050
// 00770e6d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770e75  e846100200           call 0x791ec0
// 00770e7a  6800aab100           push 0xb1aa00
// 00770e7f  e871232100           call 0x9831f5
// 00770e84  83c404               add esp, 4
// 00770e87  8b0c24               mov ecx, dword ptr [esp]
// 00770e8a  b85090e300           mov eax, 0xe39050
// 00770e8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770e96  83c40c               add esp, 0xc
// 00770e99  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
