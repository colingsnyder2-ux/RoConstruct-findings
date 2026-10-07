// roc 2012-06 00af0190  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af0190
//
// 00af0190  b9944ee200           mov ecx, 0xe24e94
// 00af0195  e896e6a8ff           call 0x57e830
// 00af019a  68f047b100           push 0xb147f0
// 00af019f  e85130e9ff           call 0x9831f5
// 00af01a4  59                   pop ecx
// 00af01a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
