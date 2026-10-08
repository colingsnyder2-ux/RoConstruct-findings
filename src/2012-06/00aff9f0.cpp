// from server: 100% by auto
// roc 2012-06 00aff9f0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff9f0
//
// 00aff9f0  b9088de400           mov ecx, 0xe48d08
// 00aff9f5  e826dac7ff           call 0x77d420
// 00aff9fa  68c0b3b100           push 0xb1b3c0
// 00aff9ff  e8f137e8ff           call 0x9831f5
// 00affa04  59                   pop ecx
// 00affa05  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
