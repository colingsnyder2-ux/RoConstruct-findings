// roc 2011-06 00a19de0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19de0
//
// 00a19de0  b93885cb00           mov ecx, 0xcb8538
// 00a19de5  e8f637aeff           call 0x4fd5e0
// 00a19dea  68303fa300           push 0xa33f30
// 00a19def  e86913dfff           call 0x80b15d
// 00a19df4  59                   pop ecx
// 00a19df5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
