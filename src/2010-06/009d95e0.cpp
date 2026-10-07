// roc 2010-06 009d95e0  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d95e0
//
// 009d95e0  b9f055c200           mov ecx, 0xc255f0
// 009d95e5  e81695dfff           call 0x7d2b00
// 009d95ea  68308f9e00           push 0x9e8f30
// 009d95ef  e86ff4dcff           call 0x7a8a63
// 009d95f4  59                   pop ecx
// 009d95f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
