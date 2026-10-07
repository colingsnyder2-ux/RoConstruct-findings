// roc 2012-06 00aff7d0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff7d0
//
// 00aff7d0  b9f489e400           mov ecx, 0xe489f4
// 00aff7d5  e8368ac7ff           call 0x778210
// 00aff7da  68d0b4b100           push 0xb1b4d0
// 00aff7df  e8113ae8ff           call 0x9831f5
// 00aff7e4  59                   pop ecx
// 00aff7e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
