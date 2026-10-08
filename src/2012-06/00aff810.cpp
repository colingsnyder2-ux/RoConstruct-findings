// from server: 100% by auto
// roc 2012-06 00aff810  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff810
//
// 00aff810  b9fc8ae400           mov ecx, 0xe48afc
// 00aff815  e89693c7ff           call 0x778bb0
// 00aff81a  68b0b4b100           push 0xb1b4b0
// 00aff81f  e8d139e8ff           call 0x9831f5
// 00aff824  59                   pop ecx
// 00aff825  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
