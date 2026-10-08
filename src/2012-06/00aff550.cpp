// from server: 100% by auto
// roc 2012-06 00aff550  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff550
//
// 00aff550  b9e08ae400           mov ecx, 0xe48ae0
// 00aff555  e8761fc7ff           call 0x7714d0
// 00aff55a  6810b6b100           push 0xb1b610
// 00aff55f  e8913ce8ff           call 0x9831f5
// 00aff564  59                   pop ecx
// 00aff565  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
