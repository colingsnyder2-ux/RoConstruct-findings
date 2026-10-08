// from server: 100% by auto
// roc 2012-06 00770eb0  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770eb0
//
// 00770eb0  64a100000000         mov eax, dword ptr fs:[0]
// 00770eb6  6aff                 push -1
// 00770eb8  68be3cac00           push 0xac3cbe
// 00770ebd  50                   push eax
// 00770ebe  b801000000           mov eax, 1
// 00770ec3  64892500000000       mov dword ptr fs:[0], esp
// 00770eca  8405ac91e300         test byte ptr [0xe391ac], al
// 00770ed0  7525                 jne 0x770ef7
// 00770ed2  0905ac91e300         or dword ptr [0xe391ac], eax
// 00770ed8  b90091e300           mov ecx, 0xe39100
// 00770edd  c744240800000000     mov dword ptr [esp + 8], 0
// 00770ee5  e8061f1800           call 0x8f2df0
// 00770eea  68f0a9b100           push 0xb1a9f0
// 00770eef  e801232100           call 0x9831f5
// 00770ef4  83c404               add esp, 4
// 00770ef7  8b0c24               mov ecx, dword ptr [esp]
// 00770efa  b80091e300           mov eax, 0xe39100
// 00770eff  64890d00000000       mov dword ptr fs:[0], ecx
// 00770f06  83c40c               add esp, 0xc
// 00770f09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
