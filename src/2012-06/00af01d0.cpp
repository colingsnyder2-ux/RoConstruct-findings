// roc 2012-06 00af01d0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af01d0
//
// 00af01d0  b9984ee200           mov ecx, 0xe24e98
// 00af01d5  e8f6efa8ff           call 0x57f1d0
// 00af01da  68d047b100           push 0xb147d0
// 00af01df  e81130e9ff           call 0x9831f5
// 00af01e4  59                   pop ecx
// 00af01e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
