// roc 2012-06 00aeb440  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb440
//
// 00aeb440  b940a4e100           mov ecx, 0xe1a440
// 00aeb445  e8768998ff           call 0x473dc0
// 00aeb44a  68c026b100           push 0xb126c0
// 00aeb44f  e8a17de9ff           call 0x9831f5
// 00aeb454  59                   pop ecx
// 00aeb455  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
