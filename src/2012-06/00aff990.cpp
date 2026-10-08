// from server: 100% by auto
// roc 2012-06 00aff990  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff990
//
// 00aff990  b95089e400           mov ecx, 0xe48950
// 00aff995  e846ccc7ff           call 0x77c5e0
// 00aff99a  68f0b3b100           push 0xb1b3f0
// 00aff99f  e85138e8ff           call 0x9831f5
// 00aff9a4  59                   pop ecx
// 00aff9a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
