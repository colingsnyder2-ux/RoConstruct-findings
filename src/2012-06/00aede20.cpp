// roc 2012-06 00aede20  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aede20
//
// 00aede20  b90015e200           mov ecx, 0xe21500
// 00aede25  e8867da3ff           call 0x525bb0
// 00aede2a  689035b100           push 0xb13590
// 00aede2f  e8c153e9ff           call 0x9831f5
// 00aede34  59                   pop ecx
// 00aede35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
