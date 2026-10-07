// roc 2008-06 00447e10  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447e10
//
// 00447e10  64a100000000         mov eax, dword ptr fs:[0]
// 00447e16  6aff                 push -1
// 00447e18  68ae0e7c00           push 0x7c0eae
// 00447e1d  50                   push eax
// 00447e1e  b801000000           mov eax, 1
// 00447e23  64892500000000       mov dword ptr fs:[0], esp
// 00447e2a  8405d0d79600         test byte ptr [0x96d7d0], al
// 00447e30  7525                 jne 0x447e57
// 00447e32  0905d0d79600         or dword ptr [0x96d7d0], eax
// 00447e38  b9e8d69600           mov ecx, 0x96d6e8
// 00447e3d  c744240800000000     mov dword ptr [esp + 8], 0
// 00447e45  e896f3ffff           call 0x4471e0
// 00447e4a  68c0ad7f00           push 0x7fadc0
// 00447e4f  e85b992500           call 0x6a17af
// 00447e54  83c404               add esp, 4
// 00447e57  8b0c24               mov ecx, dword ptr [esp]
// 00447e5a  b8e8d69600           mov eax, 0x96d6e8
// 00447e5f  64890d00000000       mov dword ptr fs:[0], ecx
// 00447e66  83c40c               add esp, 0xc
// 00447e69  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
