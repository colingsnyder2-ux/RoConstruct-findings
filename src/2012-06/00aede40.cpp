// roc 2012-06 00aede40  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aede40
//
// 00aede40  b91015e200           mov ecx, 0xe21510
// 00aede45  e8b680a3ff           call 0x525f00
// 00aede4a  688035b100           push 0xb13580
// 00aede4f  e8a153e9ff           call 0x9831f5
// 00aede54  59                   pop ecx
// 00aede55  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
