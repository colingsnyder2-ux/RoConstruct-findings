// from server: 100% by auto
// roc 2011-06 00a20d80  unit: seg_00a20000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a20d80
//
// 00a20d80  b9f0a4cc00           mov ecx, 0xcca4f0
// 00a20d85  e8763bbbff           call 0x5d4900
// 00a20d8a  68b08da300           push 0xa38db0
// 00a20d8f  e8c9a3deff           call 0x80b15d
// 00a20d94  59                   pop ecx
// 00a20d95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
