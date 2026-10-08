// from server: 100% by auto
// roc 2012-06 00aff930  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff930
//
// 00aff930  b94887e400           mov ecx, 0xe48748
// 00aff935  e8c6bec7ff           call 0x77b800
// 00aff93a  6820b4b100           push 0xb1b420
// 00aff93f  e8b138e8ff           call 0x9831f5
// 00aff944  59                   pop ecx
// 00aff945  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
