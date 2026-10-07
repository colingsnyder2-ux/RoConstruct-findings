// roc 2011-06 00a20f80  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20f80
//
// 00a20f80  b964a8cc00           mov ecx, 0xcca864
// 00a20f85  e85669bbff           call 0x5d78e0
// 00a20f8a  68b088a300           push 0xa388b0
// 00a20f8f  e8c9a1deff           call 0x80b15d
// 00a20f94  59                   pop ecx
// 00a20f95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
