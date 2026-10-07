// roc 2012-06 00aeea00  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeea00
//
// 00aeea00  b9e825e200           mov ecx, 0xe225e8
// 00aeea05  e876aba5ff           call 0x549580
// 00aeea0a  68003cb100           push 0xb13c00
// 00aeea0f  e8e147e9ff           call 0x9831f5
// 00aeea14  59                   pop ecx
// 00aeea15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
