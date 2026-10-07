// roc 2007-08 00771020  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771020
//
// 00771020  b9601c8c00           mov ecx, 0x8c1c60
// 00771025  e8d646fbff           call 0x725700
// 0077102a  68809a7700           push 0x779a80
// 0077102f  e8effcebff           call 0x630d23
// 00771034  59                   pop ecx
// 00771035  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
