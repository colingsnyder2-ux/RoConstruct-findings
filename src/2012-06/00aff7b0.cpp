// roc 2012-06 00aff7b0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff7b0
//
// 00aff7b0  b94c8ae400           mov ecx, 0xe48a4c
// 00aff7b5  e88685c7ff           call 0x777d40
// 00aff7ba  68e0b4b100           push 0xb1b4e0
// 00aff7bf  e8313ae8ff           call 0x9831f5
// 00aff7c4  59                   pop ecx
// 00aff7c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
