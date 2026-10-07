// roc 2011-06 00a15ca0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15ca0
//
// 00a15ca0  b90c24cb00           mov ecx, 0xcb240c
// 00a15ca5  e8365ca0ff           call 0x41b8e0
// 00a15caa  68b009a300           push 0xa309b0
// 00a15caf  e8a954dfff           call 0x80b15d
// 00a15cb4  59                   pop ecx
// 00a15cb5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
