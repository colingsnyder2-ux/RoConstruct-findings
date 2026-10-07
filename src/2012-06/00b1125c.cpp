// roc 2012-06 00b1125c  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b1125c
//
// 00b1125c  b9c4a4e500           mov ecx, 0xe5a4c4
// 00b11261  e85caaf6ff           call 0xa7bcc2
// 00b11266  686418b200           push 0xb21864
// 00b1126b  e8851fe7ff           call 0x9831f5
// 00b11270  59                   pop ecx
// 00b11271  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
