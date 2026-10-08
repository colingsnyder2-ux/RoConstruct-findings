// from server: 100% by auto
// roc 2011-06 00a20ce0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20ce0
//
// 00a20ce0  b938a8cc00           mov ecx, 0xcca838
// 00a20ce5  e8062ebbff           call 0x5d3af0
// 00a20cea  68408fa300           push 0xa38f40
// 00a20cef  e869a4deff           call 0x80b15d
// 00a20cf4  59                   pop ecx
// 00a20cf5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
