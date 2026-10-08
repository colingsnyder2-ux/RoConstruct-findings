// from server: 100% by auto
// roc 2012-06 00aff5f0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff5f0
//
// 00aff5f0  b9c888e400           mov ecx, 0xe488c8
// 00aff5f5  e80638c7ff           call 0x772e00
// 00aff5fa  68c0b5b100           push 0xb1b5c0
// 00aff5ff  e8f13be8ff           call 0x9831f5
// 00aff604  59                   pop ecx
// 00aff605  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
