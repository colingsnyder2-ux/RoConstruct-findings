// roc 2011-06 00a15c60  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15c60
//
// 00a15c60  b93423cb00           mov ecx, 0xcb2334
// 00a15c65  e8d60fa0ff           call 0x416c40
// 00a15c6a  686007a300           push 0xa30760
// 00a15c6f  e8e954dfff           call 0x80b15d
// 00a15c74  59                   pop ecx
// 00a15c75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
