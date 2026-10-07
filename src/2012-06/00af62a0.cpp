// roc 2012-06 00af62a0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af62a0
//
// 00af62a0  b9ec00e300           mov ecx, 0xe300ec
// 00af62a5  e86683beff           call 0x6de610
// 00af62aa  68706eb100           push 0xb16e70
// 00af62af  e841cfe8ff           call 0x9831f5
// 00af62b4  59                   pop ecx
// 00af62b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
