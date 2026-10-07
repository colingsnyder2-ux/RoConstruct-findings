// roc 2011-06 00a20b60  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20b60
//
// 00a20b60  b944a8cc00           mov ecx, 0xcca844
// 00a20b65  e8d60dbbff           call 0x5d1940
// 00a20b6a  680093a300           push 0xa39300
// 00a20b6f  e8e9a5deff           call 0x80b15d
// 00a20b74  59                   pop ecx
// 00a20b75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
