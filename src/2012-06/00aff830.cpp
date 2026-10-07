// roc 2012-06 00aff830  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff830
//
// 00aff830  b90c8de400           mov ecx, 0xe48d0c
// 00aff835  e84698c7ff           call 0x779080
// 00aff83a  68a0b4b100           push 0xb1b4a0
// 00aff83f  e8b139e8ff           call 0x9831f5
// 00aff844  59                   pop ecx
// 00aff845  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
