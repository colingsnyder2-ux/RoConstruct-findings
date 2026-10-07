// roc 2010-06 009cfbe0  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cfbe0
//
// 009cfbe0  b99ca9c100           mov ecx, 0xc1a99c
// 009cfbe5  e8c6acd6ff           call 0x73a8b0
// 009cfbea  68d0329e00           push 0x9e32d0
// 009cfbef  e86f8eddff           call 0x7a8a63
// 009cfbf4  59                   pop ecx
// 009cfbf5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
