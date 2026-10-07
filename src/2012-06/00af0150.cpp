// roc 2012-06 00af0150  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af0150
//
// 00af0150  b97c4ee200           mov ecx, 0xe24e7c
// 00af0155  e836dda8ff           call 0x57de90
// 00af015a  681048b100           push 0xb14810
// 00af015f  e89130e9ff           call 0x9831f5
// 00af0164  59                   pop ecx
// 00af0165  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
