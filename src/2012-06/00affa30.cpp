// from server: 100% by auto
// roc 2012-06 00affa30  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00affa30
//
// 00affa30  b9f88ae400           mov ecx, 0xe48af8
// 00affa35  e8e6e3c7ff           call 0x77de20
// 00affa3a  68a0b3b100           push 0xb1b3a0
// 00affa3f  e8b137e8ff           call 0x9831f5
// 00affa44  59                   pop ecx
// 00affa45  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
