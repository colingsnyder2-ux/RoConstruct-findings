// from server: 100% by auto
// roc 2008-06 00447da0  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447da0
//
// 00447da0  64a100000000         mov eax, dword ptr fs:[0]
// 00447da6  6aff                 push -1
// 00447da8  688e0e7c00           push 0x7c0e8e
// 00447dad  50                   push eax
// 00447dae  b801000000           mov eax, 1
// 00447db3  64892500000000       mov dword ptr fs:[0], esp
// 00447dba  8405e0d69600         test byte ptr [0x96d6e0], al
// 00447dc0  7525                 jne 0x447de7
// 00447dc2  0905e0d69600         or dword ptr [0x96d6e0], eax
// 00447dc8  b9f8d59600           mov ecx, 0x96d5f8
// 00447dcd  c744240800000000     mov dword ptr [esp + 8], 0
// 00447dd5  e886f2ffff           call 0x447060
// 00447dda  68d0ad7f00           push 0x7fadd0
// 00447ddf  e8cb992500           call 0x6a17af
// 00447de4  83c404               add esp, 4
// 00447de7  8b0c24               mov ecx, dword ptr [esp]
// 00447dea  b8f8d59600           mov eax, 0x96d5f8
// 00447def  64890d00000000       mov dword ptr fs:[0], ecx
// 00447df6  83c40c               add esp, 0xc
// 00447df9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
