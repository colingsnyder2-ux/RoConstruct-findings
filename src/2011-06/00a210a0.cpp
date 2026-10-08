// from server: 100% by auto
// roc 2011-06 00a210a0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a210a0
//
// 00a210a0  b97ca8cc00           mov ecx, 0xcca87c
// 00a210a5  e88681bbff           call 0x5d9230
// 00a210aa  68e085a300           push 0xa385e0
// 00a210af  e8a9a0deff           call 0x80b15d
// 00a210b4  59                   pop ecx
// 00a210b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
