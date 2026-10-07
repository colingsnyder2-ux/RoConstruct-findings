// roc 2010-06 009da240  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da240
//
// 009da240  b90c67c200           mov ecx, 0xc2670c
// 009da245  e856d7ecff           call 0x8a79a0
// 009da24a  68c0919e00           push 0x9e91c0
// 009da24f  e80fe8dcff           call 0x7a8a63
// 009da254  59                   pop ecx
// 009da255  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
