// roc 2012-06 00ae9630  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9630
//
// 00ae9630  b91c64e100           mov ecx, 0xe1641c
// 00ae9635  e846a091ff           call 0x403680
// 00ae963a  68a014b100           push 0xb114a0
// 00ae963f  e8b19be9ff           call 0x9831f5
// 00ae9644  59                   pop ecx
// 00ae9645  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
