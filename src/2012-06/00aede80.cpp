// roc 2012-06 00aede80  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aede80
//
// 00aede80  b91815e200           mov ecx, 0xe21518
// 00aede85  e8168aa3ff           call 0x5268a0
// 00aede8a  686035b100           push 0xb13560
// 00aede8f  e86153e9ff           call 0x9831f5
// 00aede94  59                   pop ecx
// 00aede95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
