// roc 2012-06 00aeb3c0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb3c0
//
// 00aeb3c0  b9d0a0e100           mov ecx, 0xe1a0d0
// 00aeb3c5  e846a698ff           call 0x475a10
// 00aeb3ca  68d026b100           push 0xb126d0
// 00aeb3cf  e8217ee9ff           call 0x9831f5
// 00aeb3d4  59                   pop ecx
// 00aeb3d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
