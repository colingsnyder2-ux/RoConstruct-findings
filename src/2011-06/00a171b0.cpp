// roc 2011-06 00a171b0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a171b0
//
// 00a171b0  b9ac3ecb00           mov ecx, 0xcb3eac
// 00a171b5  e856f7a5ff           call 0x476910
// 00a171ba  68301ba300           push 0xa31b30
// 00a171bf  e8993fdfff           call 0x80b15d
// 00a171c4  59                   pop ecx
// 00a171c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
