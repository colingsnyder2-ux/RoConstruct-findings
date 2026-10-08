// from server: 100% by auto
// roc 2011-06 00a20da0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20da0
//
// 00a20da0  b930a4cc00           mov ecx, 0xcca430
// 00a20da5  e8263ebbff           call 0x5d4bd0
// 00a20daa  68608da300           push 0xa38d60
// 00a20daf  e8a9a3deff           call 0x80b15d
// 00a20db4  59                   pop ecx
// 00a20db5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
