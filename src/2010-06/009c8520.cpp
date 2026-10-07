// roc 2010-06 009c8520  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8520
//
// 009c8520  b95888c000           mov ecx, 0xc08858
// 009c8525  e8c63fadff           call 0x49c4f0
// 009c852a  68c0dc9d00           push 0x9ddcc0
// 009c852f  e82f05deff           call 0x7a8a63
// 009c8534  59                   pop ecx
// 009c8535  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
