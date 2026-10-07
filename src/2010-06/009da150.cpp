// roc 2010-06 009da150  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da150
//
// 009da150  b9a466c200           mov ecx, 0xc266a4
// 009da155  e8282efaff           call 0x97cf82
// 009da15a  68a0919e00           push 0x9e91a0
// 009da15f  e8ffe8dcff           call 0x7a8a63
// 009da164  59                   pop ecx
// 009da165  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
