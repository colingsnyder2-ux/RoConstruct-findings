// from server: 100% by auto
// roc 2009-06 00443330  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00443330
//
// 00443330  64a100000000         mov eax, dword ptr fs:[0]
// 00443336  6aff                 push -1
// 00443338  687e048500           push 0x85047e
// 0044333d  50                   push eax
// 0044333e  b801000000           mov eax, 1
// 00443343  64892500000000       mov dword ptr fs:[0], esp
// 0044334a  84054caaa300         test byte ptr [0xa3aa4c], al
// 00443350  7525                 jne 0x443377
// 00443352  09054caaa300         or dword ptr [0xa3aa4c], eax
// 00443358  b960a9a300           mov ecx, 0xa3a960
// 0044335d  c744240800000000     mov dword ptr [esp + 8], 0
// 00443365  e8f6f5ffff           call 0x442960
// 0044336a  6860478900           push 0x894760
// 0044336f  e887672d00           call 0x719afb
// 00443374  83c404               add esp, 4
// 00443377  8b0c24               mov ecx, dword ptr [esp]
// 0044337a  b860a9a300           mov eax, 0xa3a960
// 0044337f  64890d00000000       mov dword ptr fs:[0], ecx
// 00443386  83c40c               add esp, 0xc
// 00443389  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
