// from server: 100% by auto
// roc 2012-06 00468d20  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00468d20
//
// 00468d20  64a100000000         mov eax, dword ptr fs:[0]
// 00468d26  6aff                 push -1
// 00468d28  68aefba900           push 0xa9fbae
// 00468d2d  50                   push eax
// 00468d2e  b801000000           mov eax, 1
// 00468d33  64892500000000       mov dword ptr fs:[0], esp
// 00468d3a  84051c90e100         test byte ptr [0xe1901c], al
// 00468d40  7525                 jne 0x468d67
// 00468d42  09051c90e100         or dword ptr [0xe1901c], eax
// 00468d48  b9708fe100           mov ecx, 0xe18f70
// 00468d4d  c744240800000000     mov dword ptr [esp + 8], 0
// 00468d55  e876f0ffff           call 0x467dd0
// 00468d5a  685024b100           push 0xb12450
// 00468d5f  e891a45100           call 0x9831f5
// 00468d64  83c404               add esp, 4
// 00468d67  8b0c24               mov ecx, dword ptr [esp]
// 00468d6a  b8708fe100           mov eax, 0xe18f70
// 00468d6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00468d76  83c40c               add esp, 0xc
// 00468d79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
