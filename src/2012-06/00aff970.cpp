// roc 2012-06 00aff970  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff970
//
// 00aff970  b9d88ae400           mov ecx, 0xe48ad8
// 00aff975  e826c8c7ff           call 0x77c1a0
// 00aff97a  6800b4b100           push 0xb1b400
// 00aff97f  e87138e8ff           call 0x9831f5
// 00aff984  59                   pop ecx
// 00aff985  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
