// roc 2012-06 00aedf80  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aedf80
//
// 00aedf80  b9e814e200           mov ecx, 0xe214e8
// 00aedf85  e816aea3ff           call 0x528da0
// 00aedf8a  68e034b100           push 0xb134e0
// 00aedf8f  e86152e9ff           call 0x9831f5
// 00aedf94  59                   pop ecx
// 00aedf95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
