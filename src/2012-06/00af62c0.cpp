// roc 2012-06 00af62c0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af62c0
//
// 00af62c0  b9f000e300           mov ecx, 0xe300f0
// 00af62c5  e81688beff           call 0x6deae0
// 00af62ca  68606eb100           push 0xb16e60
// 00af62cf  e821cfe8ff           call 0x9831f5
// 00af62d4  59                   pop ecx
// 00af62d5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
