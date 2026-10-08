// from server: 100% by auto
// roc 2012-06 00aeba80  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeba80
//
// 00aeba80  b914c4e100           mov ecx, 0xe1c414
// 00aeba85  e8a66d9eff           call 0x4d2830
// 00aeba8a  68d02ab100           push 0xb12ad0
// 00aeba8f  e86177e9ff           call 0x9831f5
// 00aeba94  59                   pop ecx
// 00aeba95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
