// roc 2012-06 00aedec0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aedec0
//
// 00aedec0  b90c15e200           mov ecx, 0xe2150c
// 00aedec5  e87693a3ff           call 0x527240
// 00aedeca  684035b100           push 0xb13540
// 00aedecf  e82153e9ff           call 0x9831f5
// 00aeded4  59                   pop ecx
// 00aeded5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
