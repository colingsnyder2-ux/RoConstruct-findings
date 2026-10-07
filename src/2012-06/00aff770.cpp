// roc 2012-06 00aff770  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff770
//
// 00aff770  b97c88e400           mov ecx, 0xe4887c
// 00aff775  e84670c7ff           call 0x7767c0
// 00aff77a  6800b5b100           push 0xb1b500
// 00aff77f  e8713ae8ff           call 0x9831f5
// 00aff784  59                   pop ecx
// 00aff785  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
