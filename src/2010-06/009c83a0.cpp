// from server: 100% by auto
// roc 2010-06 009c83a0  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c83a0
//
// 009c83a0  b9187bc000           mov ecx, 0xc07b18
// 009c83a5  e8266ab5ff           call 0x51edd0
// 009c83aa  68f0da9d00           push 0x9ddaf0
// 009c83af  e8af06deff           call 0x7a8a63
// 009c83b4  59                   pop ecx
// 009c83b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
