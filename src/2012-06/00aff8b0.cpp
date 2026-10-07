// roc 2012-06 00aff8b0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff8b0
//
// 00aff8b0  b9d48ae400           mov ecx, 0xe48ad4
// 00aff8b5  e826abc7ff           call 0x77a3e0
// 00aff8ba  6860b4b100           push 0xb1b460
// 00aff8bf  e83139e8ff           call 0x9831f5
// 00aff8c4  59                   pop ecx
// 00aff8c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
