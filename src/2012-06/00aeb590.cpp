// roc 2012-06 00aeb590  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb590
//
// 00aeb590  b96ca6e100           mov ecx, 0xe1a66c
// 00aeb595  e8469199ff           call 0x4846e0
// 00aeb59a  68c027b100           push 0xb127c0
// 00aeb59f  e8517ce9ff           call 0x9831f5
// 00aeb5a4  59                   pop ecx
// 00aeb5a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
