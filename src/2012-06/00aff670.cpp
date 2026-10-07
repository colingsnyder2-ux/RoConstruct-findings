// roc 2012-06 00aff670  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff670
//
// 00aff670  b9e88ae400           mov ecx, 0xe48ae8
// 00aff675  e8c64ac7ff           call 0x774140
// 00aff67a  6880b5b100           push 0xb1b580
// 00aff67f  e8713be8ff           call 0x9831f5
// 00aff684  59                   pop ecx
// 00aff685  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
