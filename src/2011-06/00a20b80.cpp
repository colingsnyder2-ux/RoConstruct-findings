// roc 2011-06 00a20b80  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20b80
//
// 00a20b80  b9e0a7cc00           mov ecx, 0xcca7e0
// 00a20b85  e88610bbff           call 0x5d1c10
// 00a20b8a  68b092a300           push 0xa392b0
// 00a20b8f  e8c9a5deff           call 0x80b15d
// 00a20b94  59                   pop ecx
// 00a20b95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
