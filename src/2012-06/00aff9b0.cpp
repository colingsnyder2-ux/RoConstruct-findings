// from server: 100% by auto
// roc 2012-06 00aff9b0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff9b0
//
// 00aff9b0  b92c87e400           mov ecx, 0xe4872c
// 00aff9b5  e866d0c7ff           call 0x77ca20
// 00aff9ba  68e0b3b100           push 0xb1b3e0
// 00aff9bf  e83138e8ff           call 0x9831f5
// 00aff9c4  59                   pop ecx
// 00aff9c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
