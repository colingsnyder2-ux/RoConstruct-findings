// from server: 100% by auto
// roc 2011-06 00a15af0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15af0
//
// 00a15af0  b90422cb00           mov ecx, 0xcb2204
// 00a15af5  e8368c9fff           call 0x40e730
// 00a15afa  68c006a300           push 0xa306c0
// 00a15aff  e85956dfff           call 0x80b15d
// 00a15b04  59                   pop ecx
// 00a15b05  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
