// from server: 100% by auto
// roc 2009-06 00443480  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00443480
//
// 00443480  64a100000000         mov eax, dword ptr fs:[0]
// 00443486  6aff                 push -1
// 00443488  68de048500           push 0x8504de
// 0044348d  50                   push eax
// 0044348e  b801000000           mov eax, 1
// 00443493  64892500000000       mov dword ptr fs:[0], esp
// 0044349a  84051cada300         test byte ptr [0xa3ad1c], al
// 004434a0  7525                 jne 0x4434c7
// 004434a2  09051cada300         or dword ptr [0xa3ad1c], eax
// 004434a8  b930aca300           mov ecx, 0xa3ac30
// 004434ad  c744240800000000     mov dword ptr [esp + 8], 0
// 004434b5  e846f9ffff           call 0x442e00
// 004434ba  6830478900           push 0x894730
// 004434bf  e837662d00           call 0x719afb
// 004434c4  83c404               add esp, 4
// 004434c7  8b0c24               mov ecx, dword ptr [esp]
// 004434ca  b830aca300           mov eax, 0xa3ac30
// 004434cf  64890d00000000       mov dword ptr fs:[0], ecx
// 004434d6  83c40c               add esp, 0xc
// 004434d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
