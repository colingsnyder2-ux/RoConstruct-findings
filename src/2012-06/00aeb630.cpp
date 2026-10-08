// from server: 100% by auto
// roc 2012-06 00aeb630  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb630
//
// 00aeb630  b938a9e100           mov ecx, 0xe1a938
// 00aeb635  e826ce9aff           call 0x498460
// 00aeb63a  681028b100           push 0xb12810
// 00aeb63f  e8b17be9ff           call 0x9831f5
// 00aeb644  59                   pop ecx
// 00aeb645  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
