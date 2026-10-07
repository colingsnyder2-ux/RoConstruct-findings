// roc 2011-06 00a1a740  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1a740
//
// 00a1a740  b9708ccb00           mov ecx, 0xcb8c70
// 00a1a745  e846a2b1ff           call 0x534990
// 00a1a74a  683042a300           push 0xa34230
// 00a1a74f  e8090adfff           call 0x80b15d
// 00a1a754  59                   pop ecx
// 00a1a755  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
