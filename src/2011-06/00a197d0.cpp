// roc 2011-06 00a197d0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a197d0
//
// 00a197d0  b9b87fcb00           mov ecx, 0xcb7fb8
// 00a197d5  e8b6c6acff           call 0x4e5e90
// 00a197da  687038a300           push 0xa33870
// 00a197df  e87919dfff           call 0x80b15d
// 00a197e4  59                   pop ecx
// 00a197e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
