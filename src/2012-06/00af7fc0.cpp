// roc 2012-06 00af7fc0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af7fc0
//
// 00af7fc0  b9dc1fe300           mov ecx, 0xe31fdc
// 00af7fc5  e8a614c2ff           call 0x719470
// 00af7fca  689076b100           push 0xb17690
// 00af7fcf  e821b2e8ff           call 0x9831f5
// 00af7fd4  59                   pop ecx
// 00af7fd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
