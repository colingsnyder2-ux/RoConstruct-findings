// from server: 100% by auto
// roc 2012-06 00ae9eb0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9eb0
//
// 00ae9eb0  b9188ae100           mov ecx, 0xe18a18
// 00ae9eb5  e8962b97ff           call 0x45ca50
// 00ae9eba  68a01bb100           push 0xb11ba0
// 00ae9ebf  e83193e9ff           call 0x9831f5
// 00ae9ec4  59                   pop ecx
// 00ae9ec5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
