// from server: 100% by auto
// roc 2012-06 00737a00  unit: RBX::TextService::W4YAlignment::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00737a00
//
// 00737a00  64a100000000         mov eax, dword ptr fs:[0]
// 00737a06  6aff                 push -1
// 00737a08  68ee09ac00           push 0xac09ee
// 00737a0d  50                   push eax
// 00737a0e  b801000000           mov eax, 1
// 00737a13  64892500000000       mov dword ptr fs:[0], esp
// 00737a1a  8405d444e300         test byte ptr [0xe344d4], al
// 00737a20  7525                 jne 0x737a47
// 00737a22  0905d444e300         or dword ptr [0xe344d4], eax
// 00737a28  b92844e300           mov ecx, 0xe34428
// 00737a2d  c744240800000000     mov dword ptr [esp + 8], 0
// 00737a35  e836710700           call 0x7aeb70
// 00737a3a  68a080b100           push 0xb180a0
// 00737a3f  e8b1b72400           call 0x9831f5
// 00737a44  83c404               add esp, 4
// 00737a47  8b0c24               mov ecx, dword ptr [esp]
// 00737a4a  b82844e300           mov eax, 0xe34428
// 00737a4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00737a56  83c40c               add esp, 0xc
// 00737a59  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
