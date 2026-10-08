// from server: 100% by auto
// roc 2012-06 00aede60  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aede60
//
// 00aede60  b91c15e200           mov ecx, 0xe2151c
// 00aede65  e86685a3ff           call 0x5263d0
// 00aede6a  687035b100           push 0xb13570
// 00aede6f  e88153e9ff           call 0x9831f5
// 00aede74  59                   pop ecx
// 00aede75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
