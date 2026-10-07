// roc 2011-06 00a171d0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a171d0
//
// 00a171d0  b9fc40cb00           mov ecx, 0xcb40fc
// 00a171d5  e8f6c7a6ff           call 0x4839d0
// 00a171da  68301da300           push 0xa31d30
// 00a171df  e8793fdfff           call 0x80b15d
// 00a171e4  59                   pop ecx
// 00a171e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
