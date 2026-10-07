// roc 2012-06 00aebaf0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aebaf0
//
// 00aebaf0  b9e8dce100           mov ecx, 0xe1dce8
// 00aebaf5  e8f68da1ff           call 0x5048f0
// 00aebafa  68802cb100           push 0xb12c80
// 00aebaff  e8f176e9ff           call 0x9831f5
// 00aebb04  59                   pop ecx
// 00aebb05  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
