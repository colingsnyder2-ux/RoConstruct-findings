// roc 2009-06 00443170  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00443170
//
// 00443170  64a100000000         mov eax, dword ptr fs:[0]
// 00443176  6aff                 push -1
// 00443178  68fe038500           push 0x8503fe
// 0044317d  50                   push eax
// 0044317e  b801000000           mov eax, 1
// 00443183  64892500000000       mov dword ptr fs:[0], esp
// 0044318a  84058ca6a300         test byte ptr [0xa3a68c], al
// 00443190  7525                 jne 0x4431b7
// 00443192  09058ca6a300         or dword ptr [0xa3a68c], eax
// 00443198  b9a0a5a300           mov ecx, 0xa3a5a0
// 0044319d  c744240800000000     mov dword ptr [esp + 8], 0
// 004431a5  e896f1ffff           call 0x442340
// 004431aa  68a0478900           push 0x8947a0
// 004431af  e847692d00           call 0x719afb
// 004431b4  83c404               add esp, 4
// 004431b7  8b0c24               mov ecx, dword ptr [esp]
// 004431ba  b8a0a5a300           mov eax, 0xa3a5a0
// 004431bf  64890d00000000       mov dword ptr fs:[0], ecx
// 004431c6  83c40c               add esp, 0xc
// 004431c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
