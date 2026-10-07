// roc 2012-06 00ae9b70  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9b70
//
// 00ae9b70  b91887e100           mov ecx, 0xe18718
// 00ae9b75  e8b63894ff           call 0x42d430
// 00ae9b7a  687019b100           push 0xb11970
// 00ae9b7f  e87196e9ff           call 0x9831f5
// 00ae9b84  59                   pop ecx
// 00ae9b85  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
