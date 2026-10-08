// from server: 100% by auto
// roc 2009-06 004431e0  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004431e0
//
// 004431e0  64a100000000         mov eax, dword ptr fs:[0]
// 004431e6  6aff                 push -1
// 004431e8  681e048500           push 0x85041e
// 004431ed  50                   push eax
// 004431ee  b801000000           mov eax, 1
// 004431f3  64892500000000       mov dword ptr fs:[0], esp
// 004431fa  84057ca7a300         test byte ptr [0xa3a77c], al
// 00443200  7525                 jne 0x443227
// 00443202  09057ca7a300         or dword ptr [0xa3a77c], eax
// 00443208  b990a6a300           mov ecx, 0xa3a690
// 0044320d  c744240800000000     mov dword ptr [esp + 8], 0
// 00443215  e8a6f2ffff           call 0x4424c0
// 0044321a  6890478900           push 0x894790
// 0044321f  e8d7682d00           call 0x719afb
// 00443224  83c404               add esp, 4
// 00443227  8b0c24               mov ecx, dword ptr [esp]
// 0044322a  b890a6a300           mov eax, 0xa3a690
// 0044322f  64890d00000000       mov dword ptr fs:[0], ecx
// 00443236  83c40c               add esp, 0xc
// 00443239  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
