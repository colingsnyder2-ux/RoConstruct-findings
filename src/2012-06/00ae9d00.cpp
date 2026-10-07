// roc 2012-06 00ae9d00  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9d00
//
// 00ae9d00  b96c89e100           mov ecx, 0xe1896c
// 00ae9d05  e8b64395ff           call 0x43e0c0
// 00ae9d0a  68401bb100           push 0xb11b40
// 00ae9d0f  e8e194e9ff           call 0x9831f5
// 00ae9d14  59                   pop ecx
// 00ae9d15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
