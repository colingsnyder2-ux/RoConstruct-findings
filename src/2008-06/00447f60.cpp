// roc 2008-06 00447f60  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447f60
//
// 00447f60  64a100000000         mov eax, dword ptr fs:[0]
// 00447f66  6aff                 push -1
// 00447f68  680e0f7c00           push 0x7c0f0e
// 00447f6d  50                   push eax
// 00447f6e  b801000000           mov eax, 1
// 00447f73  64892500000000       mov dword ptr fs:[0], esp
// 00447f7a  8405a0da9600         test byte ptr [0x96daa0], al
// 00447f80  7525                 jne 0x447fa7
// 00447f82  0905a0da9600         or dword ptr [0x96daa0], eax
// 00447f88  b9b8d99600           mov ecx, 0x96d9b8
// 00447f8d  c744240800000000     mov dword ptr [esp + 8], 0
// 00447f95  e8e6f6ffff           call 0x447680
// 00447f9a  6890ad7f00           push 0x7fad90
// 00447f9f  e80b982500           call 0x6a17af
// 00447fa4  83c404               add esp, 4
// 00447fa7  8b0c24               mov ecx, dword ptr [esp]
// 00447faa  b8b8d99600           mov eax, 0x96d9b8
// 00447faf  64890d00000000       mov dword ptr fs:[0], ecx
// 00447fb6  83c40c               add esp, 0xc
// 00447fb9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
