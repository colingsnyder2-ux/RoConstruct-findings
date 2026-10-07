// roc 2011-06 00a2fae9  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2fae9
//
// 00a2fae9  b93893d100           mov ecx, 0xd19338
// 00a2faee  e83b3fedff           call 0x903a2e
// 00a2faf3  688ffda300           push 0xa3fd8f
// 00a2faf8  e860b6ddff           call 0x80b15d
// 00a2fafd  59                   pop ecx
// 00a2fafe  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
