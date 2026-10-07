// roc 2012-06 00aff8d0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff8d0
//
// 00aff8d0  b9008be400           mov ecx, 0xe48b00
// 00aff8d5  e8d6afc7ff           call 0x77a8b0
// 00aff8da  6850b4b100           push 0xb1b450
// 00aff8df  e81139e8ff           call 0x9831f5
// 00aff8e4  59                   pop ecx
// 00aff8e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
