// from server: 100% by auto
// roc 2008-06 00447e80  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447e80
//
// 00447e80  64a100000000         mov eax, dword ptr fs:[0]
// 00447e86  6aff                 push -1
// 00447e88  68ce0e7c00           push 0x7c0ece
// 00447e8d  50                   push eax
// 00447e8e  b801000000           mov eax, 1
// 00447e93  64892500000000       mov dword ptr fs:[0], esp
// 00447e9a  8405c0d89600         test byte ptr [0x96d8c0], al
// 00447ea0  7525                 jne 0x447ec7
// 00447ea2  0905c0d89600         or dword ptr [0x96d8c0], eax
// 00447ea8  b9d8d79600           mov ecx, 0x96d7d8
// 00447ead  c744240800000000     mov dword ptr [esp + 8], 0
// 00447eb5  e8c6f4ffff           call 0x447380
// 00447eba  68b0ad7f00           push 0x7fadb0
// 00447ebf  e8eb982500           call 0x6a17af
// 00447ec4  83c404               add esp, 4
// 00447ec7  8b0c24               mov ecx, dword ptr [esp]
// 00447eca  b8d8d79600           mov eax, 0x96d7d8
// 00447ecf  64890d00000000       mov dword ptr fs:[0], ecx
// 00447ed6  83c40c               add esp, 0xc
// 00447ed9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
