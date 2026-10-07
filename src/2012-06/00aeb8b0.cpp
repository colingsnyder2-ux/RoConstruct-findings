// roc 2012-06 00aeb8b0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb8b0
//
// 00aeb8b0  b99cc1e100           mov ecx, 0xe1c19c
// 00aeb8b5  e8166e9cff           call 0x4b26d0
// 00aeb8ba  682029b100           push 0xb12920
// 00aeb8bf  e83179e9ff           call 0x9831f5
// 00aeb8c4  59                   pop ecx
// 00aeb8c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
