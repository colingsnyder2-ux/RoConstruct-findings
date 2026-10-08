// from server: 100% by auto
// roc 2010-06 009c8560  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8560
//
// 009c8560  b91888c000           mov ecx, 0xc08818
// 009c8565  e8863fadff           call 0x49c4f0
// 009c856a  6840dd9d00           push 0x9ddd40
// 009c856f  e8ef04deff           call 0x7a8a63
// 009c8574  59                   pop ecx
// 009c8575  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
