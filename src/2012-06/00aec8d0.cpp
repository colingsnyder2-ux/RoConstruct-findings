// roc 2012-06 00aec8d0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aec8d0
//
// 00aec8d0  b97cdfe100           mov ecx, 0xe1df7c
// 00aec8d5  e85686a2ff           call 0x514f30
// 00aec8da  68d02cb100           push 0xb12cd0
// 00aec8df  e81169e9ff           call 0x9831f5
// 00aec8e4  59                   pop ecx
// 00aec8e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
