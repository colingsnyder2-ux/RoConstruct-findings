// roc 2012-06 00aff730  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff730
//
// 00aff730  b96c89e400           mov ecx, 0xe4896c
// 00aff735  e8e666c7ff           call 0x775e20
// 00aff73a  6820b5b100           push 0xb1b520
// 00aff73f  e8b13ae8ff           call 0x9831f5
// 00aff744  59                   pop ecx
// 00aff745  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
