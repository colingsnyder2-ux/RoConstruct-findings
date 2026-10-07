// roc 2012-06 00aeb480  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb480
//
// 00aeb480  b938a4e100           mov ecx, 0xe1a438
// 00aeb485  e8569198ff           call 0x4745e0
// 00aeb48a  68a026b100           push 0xb126a0
// 00aeb48f  e8617de9ff           call 0x9831f5
// 00aeb494  59                   pop ecx
// 00aeb495  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
