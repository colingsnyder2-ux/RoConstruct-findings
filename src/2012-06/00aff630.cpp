// roc 2012-06 00aff630  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff630
//
// 00aff630  b9dc8ae400           mov ecx, 0xe48adc
// 00aff635  e86641c7ff           call 0x7737a0
// 00aff63a  68a0b5b100           push 0xb1b5a0
// 00aff63f  e8b13be8ff           call 0x9831f5
// 00aff644  59                   pop ecx
// 00aff645  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
