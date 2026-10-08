// from server: 100% by auto
// roc 2011-06 00a17530  unit: seg_00a10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17530
//
// 00a17530  b92452cb00           mov ecx, 0xcb5224
// 00a17535  e8f659a8ff           call 0x49cf30
// 00a1753a  68601fa300           push 0xa31f60
// 00a1753f  e8193cdfff           call 0x80b15d
// 00a17544  59                   pop ecx
// 00a17545  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
