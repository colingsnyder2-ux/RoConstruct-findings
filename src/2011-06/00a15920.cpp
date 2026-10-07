// roc 2011-06 00a15920  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15920
//
// 00a15920  b90816cb00           mov ecx, 0xcb1608
// 00a15925  e816d89eff           call 0x403140
// 00a1592a  68c0ffa200           push 0xa2ffc0
// 00a1592f  e82958dfff           call 0x80b15d
// 00a15934  59                   pop ecx
// 00a15935  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
