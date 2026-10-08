// from server: 100% by auto
// roc 2010-06 004d1700  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d1700
//
// 004d1700  64a100000000         mov eax, dword ptr fs:[0]
// 004d1706  6aff                 push -1
// 004d1708  684eae9800           push 0x98ae4e
// 004d170d  50                   push eax
// 004d170e  b801000000           mov eax, 1
// 004d1713  64892500000000       mov dword ptr fs:[0], esp
// 004d171a  84052c5bc000         test byte ptr [0xc05b2c], al
// 004d1720  7525                 jne 0x4d1747
// 004d1722  09052c5bc000         or dword ptr [0xc05b2c], eax
// 004d1728  b9405ac000           mov ecx, 0xc05a40
// 004d172d  c744240800000000     mov dword ptr [esp + 8], 0
// 004d1735  e8e65d0000           call 0x4d7520
// 004d173a  68f0cf9d00           push 0x9dcff0
// 004d173f  e81f732d00           call 0x7a8a63
// 004d1744  83c404               add esp, 4
// 004d1747  8b0c24               mov ecx, dword ptr [esp]
// 004d174a  b8405ac000           mov eax, 0xc05a40
// 004d174f  64890d00000000       mov dword ptr fs:[0], ecx
// 004d1756  83c40c               add esp, 0xc
// 004d1759  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
