// roc 2012-06 00af01b0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af01b0
//
// 00af01b0  b9744ee200           mov ecx, 0xe24e74
// 00af01b5  e846eba8ff           call 0x57ed00
// 00af01ba  68e047b100           push 0xb147e0
// 00af01bf  e83130e9ff           call 0x9831f5
// 00af01c4  59                   pop ecx
// 00af01c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
