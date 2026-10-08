// from server: 100% by auto
// roc 2012-06 00aff5d0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff5d0
//
// 00aff5d0  b9148de400           mov ecx, 0xe48d14
// 00aff5d5  e85633c7ff           call 0x772930
// 00aff5da  68d0b5b100           push 0xb1b5d0
// 00aff5df  e8113ce8ff           call 0x9831f5
// 00aff5e4  59                   pop ecx
// 00aff5e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
