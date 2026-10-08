// from server: 100% by auto
// roc 2012-06 00aedf40  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aedf40
//
// 00aedf40  b90415e200           mov ecx, 0xe21504
// 00aedf45  e836a6a3ff           call 0x528580
// 00aedf4a  680035b100           push 0xb13500
// 00aedf4f  e8a152e9ff           call 0x9831f5
// 00aedf54  59                   pop ecx
// 00aedf55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
