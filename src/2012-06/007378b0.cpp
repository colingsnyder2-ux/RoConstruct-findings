// roc 2012-06 007378b0  unit: RBX::TextService::W4YAlignment::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007378b0
//
// 007378b0  64a100000000         mov eax, dword ptr fs:[0]
// 007378b6  6aff                 push -1
// 007378b8  688e09ac00           push 0xac098e
// 007378bd  50                   push eax
// 007378be  b801000000           mov eax, 1
// 007378c3  64892500000000       mov dword ptr fs:[0], esp
// 007378ca  8405c442e300         test byte ptr [0xe342c4], al
// 007378d0  7525                 jne 0x7378f7
// 007378d2  0905c442e300         or dword ptr [0xe342c4], eax
// 007378d8  b91842e300           mov ecx, 0xe34218
// 007378dd  c744240800000000     mov dword ptr [esp + 8], 0
// 007378e5  e8c66e0700           call 0x7ae7b0
// 007378ea  68d080b100           push 0xb180d0
// 007378ef  e801b92400           call 0x9831f5
// 007378f4  83c404               add esp, 4
// 007378f7  8b0c24               mov ecx, dword ptr [esp]
// 007378fa  b81842e300           mov eax, 0xe34218
// 007378ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00737906  83c40c               add esp, 0xc
// 00737909  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
