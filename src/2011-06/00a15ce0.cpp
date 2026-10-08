// from server: 100% by auto
// roc 2011-06 00a15ce0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15ce0
//
// 00a15ce0  b90424cb00           mov ecx, 0xcb2404
// 00a15ce5  e89661a0ff           call 0x41be80
// 00a15cea  681009a300           push 0xa30910
// 00a15cef  e86954dfff           call 0x80b15d
// 00a15cf4  59                   pop ecx
// 00a15cf5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
