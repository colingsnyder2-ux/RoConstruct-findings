// roc 2012-06 00ae99b0  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae99b0
//
// 00ae99b0  b9b87ce100           mov ecx, 0xe17cb8
// 00ae99b5  e8668692ff           call 0x412020
// 00ae99ba  681017b100           push 0xb11710
// 00ae99bf  e83198e9ff           call 0x9831f5
// 00ae99c4  59                   pop ecx
// 00ae99c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
