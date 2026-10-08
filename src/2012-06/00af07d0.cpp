// from server: 100% by auto
// roc 2012-06 00af07d0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af07d0
//
// 00af07d0  b9a07de200           mov ecx, 0xe27da0
// 00af07d5  e8d632aeff           call 0x5d3ab0
// 00af07da  68404bb100           push 0xb14b40
// 00af07df  e8112ae9ff           call 0x9831f5
// 00af07e4  59                   pop ecx
// 00af07e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
