// roc 2011-06 00a17190  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17190
//
// 00a17190  b9b03ecb00           mov ecx, 0xcb3eb0
// 00a17195  e8a6f4a5ff           call 0x476640
// 00a1719a  68801ba300           push 0xa31b80
// 00a1719f  e8b93fdfff           call 0x80b15d
// 00a171a4  59                   pop ecx
// 00a171a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
