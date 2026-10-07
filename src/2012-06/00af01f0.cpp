// roc 2012-06 00af01f0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af01f0
//
// 00af01f0  b9904ee200           mov ecx, 0xe24e90
// 00af01f5  e8a6f4a8ff           call 0x57f6a0
// 00af01fa  68c047b100           push 0xb147c0
// 00af01ff  e8f12fe9ff           call 0x9831f5
// 00af0204  59                   pop ecx
// 00af0205  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
