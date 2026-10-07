// roc 2012-06 00aeb940  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb940
//
// 00aeb940  b99cc2e100           mov ecx, 0xe1c29c
// 00aeb945  e8d61d9dff           call 0x4bd720
// 00aeb94a  68f029b100           push 0xb129f0
// 00aeb94f  e8a178e9ff           call 0x9831f5
// 00aeb954  59                   pop ecx
// 00aeb955  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
