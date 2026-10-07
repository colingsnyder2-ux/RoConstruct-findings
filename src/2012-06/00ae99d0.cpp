// roc 2012-06 00ae99d0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae99d0
//
// 00ae99d0  b95480e100           mov ecx, 0xe18054
// 00ae99d5  e8160593ff           call 0x419ef0
// 00ae99da  68c017b100           push 0xb117c0
// 00ae99df  e81198e9ff           call 0x9831f5
// 00ae99e4  59                   pop ecx
// 00ae99e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
