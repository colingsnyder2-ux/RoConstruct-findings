// from server: 100% by auto
// roc 2012-06 00aff710  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff710
//
// 00aff710  b93087e400           mov ecx, 0xe48730
// 00aff715  e83662c7ff           call 0x775950
// 00aff71a  6830b5b100           push 0xb1b530
// 00aff71f  e8d13ae8ff           call 0x9831f5
// 00aff724  59                   pop ecx
// 00aff725  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
