// roc 2012-06 00ae9ce0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9ce0
//
// 00ae9ce0  b97089e100           mov ecx, 0xe18970
// 00ae9ce5  e8063f95ff           call 0x43dbf0
// 00ae9cea  68501bb100           push 0xb11b50
// 00ae9cef  e80195e9ff           call 0x9831f5
// 00ae9cf4  59                   pop ecx
// 00ae9cf5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
