// roc 2012-06 00aff570  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff570
//
// 00aff570  b9408ae400           mov ecx, 0xe48a40
// 00aff575  e82624c7ff           call 0x7719a0
// 00aff57a  6800b6b100           push 0xb1b600
// 00aff57f  e8713ce8ff           call 0x9831f5
// 00aff584  59                   pop ecx
// 00aff585  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
