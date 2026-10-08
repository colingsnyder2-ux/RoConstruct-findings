// from server: 100% by auto
// roc 2012-06 00af6a00  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af6a00
//
// 00af6a00  b95402e300           mov ecx, 0xe30254
// 00af6a05  e896febfff           call 0x6f68a0
// 00af6a0a  681071b100           push 0xb17110
// 00af6a0f  e8e1c7e8ff           call 0x9831f5
// 00af6a14  59                   pop ecx
// 00af6a15  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
