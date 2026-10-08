// from server: 100% by auto
// roc 2012-06 00aeba60  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeba60
//
// 00aeba60  b974c9e100           mov ecx, 0xe1c974
// 00aeba65  e8f6689eff           call 0x4d2360
// 00aeba6a  68e02ab100           push 0xb12ae0
// 00aeba6f  e88177e9ff           call 0x9831f5
// 00aeba74  59                   pop ecx
// 00aeba75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
