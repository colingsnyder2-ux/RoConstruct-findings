// roc 2012-06 00aff910  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff910
//
// 00aff910  b9388ae400           mov ecx, 0xe48a38
// 00aff915  e816bac7ff           call 0x77b330
// 00aff91a  6830b4b100           push 0xb1b430
// 00aff91f  e8d138e8ff           call 0x9831f5
// 00aff924  59                   pop ecx
// 00aff925  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
