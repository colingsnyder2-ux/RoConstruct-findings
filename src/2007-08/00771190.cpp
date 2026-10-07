// roc 2007-08 00771190  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771190
//
// 00771190  b9b01d8c00           mov ecx, 0x8c1db0
// 00771195  e86645fbff           call 0x725700
// 0077119a  68309b7700           push 0x779b30
// 0077119f  e87ffbebff           call 0x630d23
// 007711a4  59                   pop ecx
// 007711a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
