// roc 2012-06 00aeb460  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb460
//
// 00aeb460  b93ca4e100           mov ecx, 0xe1a43c
// 00aeb465  e8a68c98ff           call 0x474110
// 00aeb46a  68b026b100           push 0xb126b0
// 00aeb46f  e8817de9ff           call 0x9831f5
// 00aeb474  59                   pop ecx
// 00aeb475  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
