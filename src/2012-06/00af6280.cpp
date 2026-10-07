// roc 2012-06 00af6280  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af6280
//
// 00af6280  b9e800e300           mov ecx, 0xe300e8
// 00af6285  e8b67ebeff           call 0x6de140
// 00af628a  68806eb100           push 0xb16e80
// 00af628f  e861cfe8ff           call 0x9831f5
// 00af6294  59                   pop ecx
// 00af6295  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
