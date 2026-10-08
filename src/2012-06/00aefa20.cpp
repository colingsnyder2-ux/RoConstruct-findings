// from server: 100% by auto
// roc 2012-06 00aefa20  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aefa20
//
// 00aefa20  b93442e200           mov ecx, 0xe24234
// 00aefa25  e876f7a6ff           call 0x55f1a0
// 00aefa2a  68c043b100           push 0xb143c0
// 00aefa2f  e8c137e9ff           call 0x9831f5
// 00aefa34  59                   pop ecx
// 00aefa35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
