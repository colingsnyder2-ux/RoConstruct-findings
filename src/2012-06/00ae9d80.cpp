// from server: 100% by auto
// roc 2012-06 00ae9d80  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9d80
//
// 00ae9d80  b95c89e100           mov ecx, 0xe1895c
// 00ae9d85  e8765395ff           call 0x43f100
// 00ae9d8a  68001bb100           push 0xb11b00
// 00ae9d8f  e86194e9ff           call 0x9831f5
// 00ae9d94  59                   pop ecx
// 00ae9d95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
