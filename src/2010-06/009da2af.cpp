// roc 2010-06 009da2af  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da2af
//
// 009da2af  b98867c200           mov ecx, 0xc26788
// 009da2b4  e8cffbecff           call 0x8a9e88
// 009da2b9  68e9919e00           push 0x9e91e9
// 009da2be  e8a0e7dcff           call 0x7a8a63
// 009da2c3  59                   pop ecx
// 009da2c4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
