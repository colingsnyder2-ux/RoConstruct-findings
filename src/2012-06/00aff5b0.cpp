// roc 2012-06 00aff5b0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff5b0
//
// 00aff5b0  b93c8ae400           mov ecx, 0xe48a3c
// 00aff5b5  e8c62ec7ff           call 0x772480
// 00aff5ba  68e0b5b100           push 0xb1b5e0
// 00aff5bf  e8313ce8ff           call 0x9831f5
// 00aff5c4  59                   pop ecx
// 00aff5c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
