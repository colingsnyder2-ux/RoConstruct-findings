// from server: 100% by auto
// roc 2012-06 00ae9e00  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9e00
//
// 00ae9e00  b94c89e100           mov ecx, 0xe1894c
// 00ae9e05  e8366695ff           call 0x440440
// 00ae9e0a  68c01ab100           push 0xb11ac0
// 00ae9e0f  e8e193e9ff           call 0x9831f5
// 00ae9e14  59                   pop ecx
// 00ae9e15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
