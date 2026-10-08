// from server: 100% by auto
// roc 2012-06 00affa10  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00affa10
//
// 00affa10  b99088e400           mov ecx, 0xe48890
// 00affa15  e806dfc7ff           call 0x77d920
// 00affa1a  68b0b3b100           push 0xb1b3b0
// 00affa1f  e8d137e8ff           call 0x9831f5
// 00affa24  59                   pop ecx
// 00affa25  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
