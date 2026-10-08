// from server: 100% by auto
// roc 2012-06 00770b30  unit: RBX::W4WaterCellDirection::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00770b30
//
// 00770b30  64a100000000         mov eax, dword ptr fs:[0]
// 00770b36  6aff                 push -1
// 00770b38  68be3bac00           push 0xac3bbe
// 00770b3d  50                   push eax
// 00770b3e  b801000000           mov eax, 1
// 00770b43  64892500000000       mov dword ptr fs:[0], esp
// 00770b4a  84052c8ce300         test byte ptr [0xe38c2c], al
// 00770b50  7525                 jne 0x770b77
// 00770b52  09052c8ce300         or dword ptr [0xe38c2c], eax
// 00770b58  b9808be300           mov ecx, 0xe38b80
// 00770b5d  c744240800000000     mov dword ptr [esp + 8], 0
// 00770b65  e8c62c0600           call 0x7d3830
// 00770b6a  6870aab100           push 0xb1aa70
// 00770b6f  e881262100           call 0x9831f5
// 00770b74  83c404               add esp, 4
// 00770b77  8b0c24               mov ecx, dword ptr [esp]
// 00770b7a  b8808be300           mov eax, 0xe38b80
// 00770b7f  64890d00000000       mov dword ptr fs:[0], ecx
// 00770b86  83c40c               add esp, 0xc
// 00770b89  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
