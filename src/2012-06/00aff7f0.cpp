// roc 2012-06 00aff7f0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff7f0
//
// 00aff7f0  b9f08ae400           mov ecx, 0xe48af0
// 00aff7f5  e8e68ec7ff           call 0x7786e0
// 00aff7fa  68c0b4b100           push 0xb1b4c0
// 00aff7ff  e8f139e8ff           call 0x9831f5
// 00aff804  59                   pop ecx
// 00aff805  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
