// from server: 100% by auto
// roc 2009-06 004433a0  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004433a0
//
// 004433a0  64a100000000         mov eax, dword ptr fs:[0]
// 004433a6  6aff                 push -1
// 004433a8  689e048500           push 0x85049e
// 004433ad  50                   push eax
// 004433ae  b801000000           mov eax, 1
// 004433b3  64892500000000       mov dword ptr fs:[0], esp
// 004433ba  84053caba300         test byte ptr [0xa3ab3c], al
// 004433c0  7525                 jne 0x4433e7
// 004433c2  09053caba300         or dword ptr [0xa3ab3c], eax
// 004433c8  b950aaa300           mov ecx, 0xa3aa50
// 004433cd  c744240800000000     mov dword ptr [esp + 8], 0
// 004433d5  e806f7ffff           call 0x442ae0
// 004433da  6850478900           push 0x894750
// 004433df  e817672d00           call 0x719afb
// 004433e4  83c404               add esp, 4
// 004433e7  8b0c24               mov ecx, dword ptr [esp]
// 004433ea  b850aaa300           mov eax, 0xa3aa50
// 004433ef  64890d00000000       mov dword ptr fs:[0], ecx
// 004433f6  83c40c               add esp, 0xc
// 004433f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
