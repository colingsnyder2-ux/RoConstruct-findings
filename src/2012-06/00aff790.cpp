// from server: 100% by auto
// roc 2012-06 00aff790  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff790
//
// 00aff790  b9c487e400           mov ecx, 0xe487c4
// 00aff795  e8f674c7ff           call 0x776c90
// 00aff79a  68f0b4b100           push 0xb1b4f0
// 00aff79f  e8513ae8ff           call 0x9831f5
// 00aff7a4  59                   pop ecx
// 00aff7a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
