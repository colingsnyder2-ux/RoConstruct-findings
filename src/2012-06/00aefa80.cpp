// roc 2012-06 00aefa80  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aefa80
//
// 00aefa80  b93842e200           mov ecx, 0xe24238
// 00aefa85  e89606a7ff           call 0x560120
// 00aefa8a  689043b100           push 0xb14390
// 00aefa8f  e86137e9ff           call 0x9831f5
// 00aefa94  59                   pop ecx
// 00aefa95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
