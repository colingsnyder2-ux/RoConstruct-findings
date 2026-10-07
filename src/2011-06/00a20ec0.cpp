// roc 2011-06 00a20ec0  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20ec0
//
// 00a20ec0  b9d4a7cc00           mov ecx, 0xcca7d4
// 00a20ec5  e85656bbff           call 0x5d6520
// 00a20eca  68908aa300           push 0xa38a90
// 00a20ecf  e889a2deff           call 0x80b15d
// 00a20ed4  59                   pop ecx
// 00a20ed5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
