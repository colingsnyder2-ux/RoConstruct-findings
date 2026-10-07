// roc 2010-06 009d4de0  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4de0
//
// 009d4de0  b904f4c100           mov ecx, 0xc1f404
// 009d4de5  e836c0b0ff           call 0x4e0e20
// 009d4dea  68f05e9e00           push 0x9e5ef0
// 009d4def  e86f3cddff           call 0x7a8a63
// 009d4df4  59                   pop ecx
// 009d4df5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
