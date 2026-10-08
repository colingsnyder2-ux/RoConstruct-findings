// from server: 100% by auto
// roc 2012-06 00ae98b0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae98b0
//
// 00ae98b0  b9d87ce100           mov ecx, 0xe17cd8
// 00ae98b5  e8666692ff           call 0x40ff20
// 00ae98ba  689017b100           push 0xb11790
// 00ae98bf  e83199e9ff           call 0x9831f5
// 00ae98c4  59                   pop ecx
// 00ae98c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
