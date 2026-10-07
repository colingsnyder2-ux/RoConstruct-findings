// roc 2011-06 00a2faff  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2faff
//
// 00a2faff  b97c93d100           mov ecx, 0xd1937c
// 00a2fb04  e8d141edff           call 0x903cda
// 00a2fb09  6899fda300           push 0xa3fd99
// 00a2fb0e  e84ab6ddff           call 0x80b15d
// 00a2fb13  59                   pop ecx
// 00a2fb14  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
