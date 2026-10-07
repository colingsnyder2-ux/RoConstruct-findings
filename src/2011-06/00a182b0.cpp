// roc 2011-06 00a182b0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a182b0
//
// 00a182b0  b93064cb00           mov ecx, 0xcb6430
// 00a182b5  e86673a9ff           call 0x4af620
// 00a182ba  68502aa300           push 0xa32a50
// 00a182bf  e8992edfff           call 0x80b15d
// 00a182c4  59                   pop ecx
// 00a182c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
