// roc 2012-06 00ae98d0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae98d0
//
// 00ae98d0  b9d47ce100           mov ecx, 0xe17cd4
// 00ae98d5  e8766a92ff           call 0x410350
// 00ae98da  688017b100           push 0xb11780
// 00ae98df  e81199e9ff           call 0x9831f5
// 00ae98e4  59                   pop ecx
// 00ae98e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
