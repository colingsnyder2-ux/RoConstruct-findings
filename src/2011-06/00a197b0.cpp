// from server: 100% by auto
// roc 2011-06 00a197b0  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a197b0
//
// 00a197b0  b9a87fcb00           mov ecx, 0xcb7fa8
// 00a197b5  e846c2acff           call 0x4e5a00
// 00a197ba  68c038a300           push 0xa338c0
// 00a197bf  e89919dfff           call 0x80b15d
// 00a197c4  59                   pop ecx
// 00a197c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
