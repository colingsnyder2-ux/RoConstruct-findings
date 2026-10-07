// roc 2011-06 00a211c0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a211c0
//
// 00a211c0  b9c0a5cc00           mov ecx, 0xcca5c0
// 00a211c5  e8e699bbff           call 0x5dabb0
// 00a211ca  681083a300           push 0xa38310
// 00a211cf  e8899fdeff           call 0x80b15d
// 00a211d4  59                   pop ecx
// 00a211d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
