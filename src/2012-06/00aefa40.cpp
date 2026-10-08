// from server: 100% by auto
// roc 2012-06 00aefa40  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aefa40
//
// 00aefa40  b92c42e200           mov ecx, 0xe2422c
// 00aefa45  e826fca6ff           call 0x55f670
// 00aefa4a  68b043b100           push 0xb143b0
// 00aefa4f  e8a137e9ff           call 0x9831f5
// 00aefa54  59                   pop ecx
// 00aefa55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
