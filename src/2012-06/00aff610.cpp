// roc 2012-06 00aff610  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff610
//
// 00aff610  b9888ae400           mov ecx, 0xe48a88
// 00aff615  e8b63cc7ff           call 0x7732d0
// 00aff61a  68b0b5b100           push 0xb1b5b0
// 00aff61f  e8d13be8ff           call 0x9831f5
// 00aff624  59                   pop ecx
// 00aff625  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
