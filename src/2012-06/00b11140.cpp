// from server: 100% by auto
// roc 2012-06 00b11140  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b11140
//
// 00b11140  b9fca3e500           mov ecx, 0xe5a3fc
// 00b11145  e80886f8ff           call 0xa99752
// 00b1114a  683018b200           push 0xb21830
// 00b1114f  e8a120e7ff           call 0x9831f5
// 00b11154  59                   pop ecx
// 00b11155  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
