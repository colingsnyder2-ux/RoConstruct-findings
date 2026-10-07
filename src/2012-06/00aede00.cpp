// roc 2012-06 00aede00  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aede00
//
// 00aede00  b9f014e200           mov ecx, 0xe214f0
// 00aede05  e8d678a3ff           call 0x5256e0
// 00aede0a  68a035b100           push 0xb135a0
// 00aede0f  e8e153e9ff           call 0x9831f5
// 00aede14  59                   pop ecx
// 00aede15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
