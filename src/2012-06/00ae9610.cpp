// from server: 100% by auto
// roc 2012-06 00ae9610  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9610
//
// 00ae9610  b92064e100           mov ecx, 0xe16420
// 00ae9615  e8969b91ff           call 0x4031b0
// 00ae961a  68b014b100           push 0xb114b0
// 00ae961f  e8d19be9ff           call 0x9831f5
// 00ae9624  59                   pop ecx
// 00ae9625  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
