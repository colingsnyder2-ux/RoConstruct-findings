// roc 2012-06 00aff870  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff870
//
// 00aff870  b9dc87e400           mov ecx, 0xe487dc
// 00aff875  e8a6a1c7ff           call 0x779a20
// 00aff87a  6880b4b100           push 0xb1b480
// 00aff87f  e87139e8ff           call 0x9831f5
// 00aff884  59                   pop ecx
// 00aff885  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
