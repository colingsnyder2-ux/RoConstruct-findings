// roc 2011-06 00a15b70  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15b70
//
// 00a15b70  b9f421cb00           mov ecx, 0xcb21f4
// 00a15b75  e866979fff           call 0x40f2e0
// 00a15b7a  688005a300           push 0xa30580
// 00a15b7f  e8d955dfff           call 0x80b15d
// 00a15b84  59                   pop ecx
// 00a15b85  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
