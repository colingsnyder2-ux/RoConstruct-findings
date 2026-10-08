// from server: 100% by auto
// roc 2012-06 00af9d00  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af9d00
//
// 00af9d00  b92456e300           mov ecx, 0xe35624
// 00af9d05  e8f683dbff           call 0x8b2100
// 00af9d0a  688082b100           push 0xb18280
// 00af9d0f  e8e194e8ff           call 0x9831f5
// 00af9d14  59                   pop ecx
// 00af9d15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
