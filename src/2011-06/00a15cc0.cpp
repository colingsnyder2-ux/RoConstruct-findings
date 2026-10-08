// from server: 100% by auto
// roc 2011-06 00a15cc0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15cc0
//
// 00a15cc0  b90824cb00           mov ecx, 0xcb2408
// 00a15cc5  e8e65ea0ff           call 0x41bbb0
// 00a15cca  686009a300           push 0xa30960
// 00a15ccf  e88954dfff           call 0x80b15d
// 00a15cd4  59                   pop ecx
// 00a15cd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
