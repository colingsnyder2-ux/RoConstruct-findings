// roc 2012-06 00aedea0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aedea0
//
// 00aedea0  b9f414e200           mov ecx, 0xe214f4
// 00aedea5  e8c68ea3ff           call 0x526d70
// 00aedeaa  685035b100           push 0xb13550
// 00aedeaf  e84153e9ff           call 0x9831f5
// 00aedeb4  59                   pop ecx
// 00aedeb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
