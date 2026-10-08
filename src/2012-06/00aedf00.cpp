// from server: 100% by auto
// roc 2012-06 00aedf00  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aedf00
//
// 00aedf00  b9fc14e200           mov ecx, 0xe214fc
// 00aedf05  e8d69ca3ff           call 0x527be0
// 00aedf0a  682035b100           push 0xb13520
// 00aedf0f  e8e152e9ff           call 0x9831f5
// 00aedf14  59                   pop ecx
// 00aedf15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
