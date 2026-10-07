// roc 2012-06 00b105c0  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b105c0
//
// 00b105c0  b93c94e500           mov ecx, 0xe5943c
// 00b105c5  e856ace9ff           call 0x9ab220
// 00b105ca  68b015b200           push 0xb215b0
// 00b105cf  e8212ce7ff           call 0x9831f5
// 00b105d4  59                   pop ecx
// 00b105d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
