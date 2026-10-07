// roc 2008-06 00447fd0  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447fd0
//
// 00447fd0  64a100000000         mov eax, dword ptr fs:[0]
// 00447fd6  6aff                 push -1
// 00447fd8  682e0f7c00           push 0x7c0f2e
// 00447fdd  50                   push eax
// 00447fde  b801000000           mov eax, 1
// 00447fe3  64892500000000       mov dword ptr fs:[0], esp
// 00447fea  840590db9600         test byte ptr [0x96db90], al
// 00447ff0  7525                 jne 0x448017
// 00447ff2  090590db9600         or dword ptr [0x96db90], eax
// 00447ff8  b9a8da9600           mov ecx, 0x96daa8
// 00447ffd  c744240800000000     mov dword ptr [esp + 8], 0
// 00448005  e8f6f7ffff           call 0x447800
// 0044800a  6880ad7f00           push 0x7fad80
// 0044800f  e89b972500           call 0x6a17af
// 00448014  83c404               add esp, 4
// 00448017  8b0c24               mov ecx, dword ptr [esp]
// 0044801a  b8a8da9600           mov eax, 0x96daa8
// 0044801f  64890d00000000       mov dword ptr fs:[0], ecx
// 00448026  83c40c               add esp, 0xc
// 00448029  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
