// roc 2011-06 00a18230  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18230
//
// 00a18230  b93864cb00           mov ecx, 0xcb6438
// 00a18235  e8a668a9ff           call 0x4aeae0
// 00a1823a  68902ba300           push 0xa32b90
// 00a1823f  e8192fdfff           call 0x80b15d
// 00a18244  59                   pop ecx
// 00a18245  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
