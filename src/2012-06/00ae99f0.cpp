// from server: 100% by auto
// roc 2012-06 00ae99f0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae99f0
//
// 00ae99f0  b91c81e100           mov ecx, 0xe1811c
// 00ae99f5  e8565493ff           call 0x41ee50
// 00ae99fa  684018b100           push 0xb11840
// 00ae99ff  e8f197e9ff           call 0x9831f5
// 00ae9a04  59                   pop ecx
// 00ae9a05  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
