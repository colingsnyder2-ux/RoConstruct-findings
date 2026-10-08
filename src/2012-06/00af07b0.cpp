// from server: 100% by auto
// roc 2012-06 00af07b0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af07b0
//
// 00af07b0  b9a47de200           mov ecx, 0xe27da4
// 00af07b5  e8b62eaeff           call 0x5d3670
// 00af07ba  68504bb100           push 0xb14b50
// 00af07bf  e8312ae9ff           call 0x9831f5
// 00af07c4  59                   pop ecx
// 00af07c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
