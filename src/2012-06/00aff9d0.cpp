// roc 2012-06 00aff9d0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff9d0
//
// 00aff9d0  b9e48ae400           mov ecx, 0xe48ae4
// 00aff9d5  e846d5c7ff           call 0x77cf20
// 00aff9da  68d0b3b100           push 0xb1b3d0
// 00aff9df  e81138e8ff           call 0x9831f5
// 00aff9e4  59                   pop ecx
// 00aff9e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
