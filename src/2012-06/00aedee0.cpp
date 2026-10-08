// from server: 100% by auto
// roc 2012-06 00aedee0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aedee0
//
// 00aedee0  b9f814e200           mov ecx, 0xe214f8
// 00aedee5  e82698a3ff           call 0x527710
// 00aedeea  683035b100           push 0xb13530
// 00aedeef  e80153e9ff           call 0x9831f5
// 00aedef4  59                   pop ecx
// 00aedef5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
