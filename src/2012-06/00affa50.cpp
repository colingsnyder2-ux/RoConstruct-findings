// from server: 100% by auto
// roc 2012-06 00affa50  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00affa50
//
// 00affa50  b9048de400           mov ecx, 0xe48d04
// 00affa55  e806e8c7ff           call 0x77e260
// 00affa5a  6890b3b100           push 0xb1b390
// 00affa5f  e89137e8ff           call 0x9831f5
// 00affa64  59                   pop ecx
// 00affa65  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
