// roc 2011-06 00a18210  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18210
//
// 00a18210  b93464cb00           mov ecx, 0xcb6434
// 00a18215  e8b667a9ff           call 0x4ae9d0
// 00a1821a  68e02ba300           push 0xa32be0
// 00a1821f  e8392fdfff           call 0x80b15d
// 00a18224  59                   pop ecx
// 00a18225  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
