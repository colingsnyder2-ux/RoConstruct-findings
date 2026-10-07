// roc 2012-06 00af7ed0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af7ed0
//
// 00af7ed0  b9201fe300           mov ecx, 0xe31f20
// 00af7ed5  e8d6e0c1ff           call 0x715fb0
// 00af7eda  68e075b100           push 0xb175e0
// 00af7edf  e811b3e8ff           call 0x9831f5
// 00af7ee4  59                   pop ecx
// 00af7ee5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
