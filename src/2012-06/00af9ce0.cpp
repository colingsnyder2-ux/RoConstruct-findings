// roc 2012-06 00af9ce0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af9ce0
//
// 00af9ce0  b93849db00           mov ecx, 0xdb4938
// 00af9ce5  e8e694c4ff           call 0x7431d0
// 00af9cea  687082b100           push 0xb18270
// 00af9cef  e80195e8ff           call 0x9831f5
// 00af9cf4  59                   pop ecx
// 00af9cf5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
