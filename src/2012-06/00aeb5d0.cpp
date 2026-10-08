// from server: 100% by auto
// roc 2012-06 00aeb5d0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb5d0
//
// 00aeb5d0  b964a6e100           mov ecx, 0xe1a664
// 00aeb5d5  e8a69a99ff           call 0x485080
// 00aeb5da  68a027b100           push 0xb127a0
// 00aeb5df  e8117ce9ff           call 0x9831f5
// 00aeb5e4  59                   pop ecx
// 00aeb5e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
