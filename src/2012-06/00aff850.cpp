// roc 2012-06 00aff850  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff850
//
// 00aff850  b93c87e400           mov ecx, 0xe4873c
// 00aff855  e8f69cc7ff           call 0x779550
// 00aff85a  6890b4b100           push 0xb1b490
// 00aff85f  e89139e8ff           call 0x9831f5
// 00aff864  59                   pop ecx
// 00aff865  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
