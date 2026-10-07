// roc 2008-06 00447ef0  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447ef0
//
// 00447ef0  64a100000000         mov eax, dword ptr fs:[0]
// 00447ef6  6aff                 push -1
// 00447ef8  68ee0e7c00           push 0x7c0eee
// 00447efd  50                   push eax
// 00447efe  b801000000           mov eax, 1
// 00447f03  64892500000000       mov dword ptr fs:[0], esp
// 00447f0a  8405b0d99600         test byte ptr [0x96d9b0], al
// 00447f10  7525                 jne 0x447f37
// 00447f12  0905b0d99600         or dword ptr [0x96d9b0], eax
// 00447f18  b9c8d89600           mov ecx, 0x96d8c8
// 00447f1d  c744240800000000     mov dword ptr [esp + 8], 0
// 00447f25  e8d6f5ffff           call 0x447500
// 00447f2a  68a0ad7f00           push 0x7fada0
// 00447f2f  e87b982500           call 0x6a17af
// 00447f34  83c404               add esp, 4
// 00447f37  8b0c24               mov ecx, dword ptr [esp]
// 00447f3a  b8c8d89600           mov eax, 0x96d8c8
// 00447f3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00447f46  83c40c               add esp, 0xc
// 00447f49  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
