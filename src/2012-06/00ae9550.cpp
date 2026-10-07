// roc 2012-06 00ae9550  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9550
//
// 00ae9550  b98c63e100           mov ecx, 0xe1638c
// 00ae9555  e8a68a91ff           call 0x402000
// 00ae955a  68f013b100           push 0xb113f0
// 00ae955f  e8919ce9ff           call 0x9831f5
// 00ae9564  59                   pop ecx
// 00ae9565  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
