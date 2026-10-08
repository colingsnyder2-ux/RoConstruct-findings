// from server: 100% by auto
// roc 2012-06 00aeb670  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb670
//
// 00aeb670  b930a9e100           mov ecx, 0xe1a930
// 00aeb675  e886d79aff           call 0x498e00
// 00aeb67a  68f027b100           push 0xb127f0
// 00aeb67f  e8717be9ff           call 0x9831f5
// 00aeb684  59                   pop ecx
// 00aeb685  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
