// from server: 100% by auto
// roc 2012-06 00aeb8d0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb8d0
//
// 00aeb8d0  b998c1e100           mov ecx, 0xe1c198
// 00aeb8d5  e8c6729cff           call 0x4b2ba0
// 00aeb8da  681029b100           push 0xb12910
// 00aeb8df  e81179e9ff           call 0x9831f5
// 00aeb8e4  59                   pop ecx
// 00aeb8e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
