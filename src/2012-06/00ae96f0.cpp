// from server: 100% by auto
// roc 2012-06 00ae96f0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae96f0
//
// 00ae96f0  b9a864e100           mov ecx, 0xe164a8
// 00ae96f5  e8060c92ff           call 0x40a300
// 00ae96fa  68d014b100           push 0xb114d0
// 00ae96ff  e8f19ae9ff           call 0x9831f5
// 00ae9704  59                   pop ecx
// 00ae9705  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
