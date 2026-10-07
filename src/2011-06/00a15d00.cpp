// roc 2011-06 00a15d00  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15d00
//
// 00a15d00  b90024cb00           mov ecx, 0xcb2400
// 00a15d05  e84664a0ff           call 0x41c150
// 00a15d0a  68c008a300           push 0xa308c0
// 00a15d0f  e84954dfff           call 0x80b15d
// 00a15d14  59                   pop ecx
// 00a15d15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
