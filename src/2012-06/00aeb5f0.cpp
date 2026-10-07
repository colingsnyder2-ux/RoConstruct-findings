// roc 2012-06 00aeb5f0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb5f0
//
// 00aeb5f0  b960a6e100           mov ecx, 0xe1a660
// 00aeb5f5  e8569f99ff           call 0x485550
// 00aeb5fa  689027b100           push 0xb12790
// 00aeb5ff  e8f17be9ff           call 0x9831f5
// 00aeb604  59                   pop ecx
// 00aeb605  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
