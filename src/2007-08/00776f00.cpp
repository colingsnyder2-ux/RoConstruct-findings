// roc 2007-08 00776f00  unit: seg_00770000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f00
//
// 00776f00  b9a4978c00           mov ecx, 0x8c97a4
// 00776f05  e8e615fcff           call 0x7384f0
// 00776f0a  6820cd7700           push 0x77cd20
// 00776f0f  e80f9eebff           call 0x630d23
// 00776f14  59                   pop ecx
// 00776f15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
