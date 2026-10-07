// roc 2012-06 00aeb5b0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb5b0
//
// 00aeb5b0  b968a6e100           mov ecx, 0xe1a668
// 00aeb5b5  e8f69599ff           call 0x484bb0
// 00aeb5ba  68b027b100           push 0xb127b0
// 00aeb5bf  e8317ce9ff           call 0x9831f5
// 00aeb5c4  59                   pop ecx
// 00aeb5c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
