// from server: 100% by auto
// roc 2012-06 00468e00  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468e00
//
// 00468e00  64a100000000         mov eax, dword ptr fs:[0]
// 00468e06  6aff                 push -1
// 00468e08  68eefba900           push 0xa9fbee
// 00468e0d  50                   push eax
// 00468e0e  b801000000           mov eax, 1
// 00468e13  64892500000000       mov dword ptr fs:[0], esp
// 00468e1a  84057c91e100         test byte ptr [0xe1917c], al
// 00468e20  7525                 jne 0x468e47
// 00468e22  09057c91e100         or dword ptr [0xe1917c], eax
// 00468e28  b9d090e100           mov ecx, 0xe190d0
// 00468e2d  c744240800000000     mov dword ptr [esp + 8], 0
// 00468e35  e8b6f0ffff           call 0x467ef0
// 00468e3a  683024b100           push 0xb12430
// 00468e3f  e8b1a35100           call 0x9831f5
// 00468e44  83c404               add esp, 4
// 00468e47  8b0c24               mov ecx, dword ptr [esp]
// 00468e4a  b8d090e100           mov eax, 0xe190d0
// 00468e4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00468e56  83c40c               add esp, 0xc
// 00468e59  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
