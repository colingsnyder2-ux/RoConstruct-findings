// from server: 100% by auto
// roc 2012-06 00af8190  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af8190
//
// 00af8190  b9fc1fe300           mov ecx, 0xe31ffc
// 00af8195  e81666c2ff           call 0x71e7b0
// 00af819a  686077b100           push 0xb17760
// 00af819f  e851b0e8ff           call 0x9831f5
// 00af81a4  59                   pop ecx
// 00af81a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
