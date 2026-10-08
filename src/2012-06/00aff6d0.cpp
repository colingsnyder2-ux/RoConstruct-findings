// from server: 100% by auto
// roc 2012-06 00aff6d0  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff6d0
//
// 00aff6d0  b99887e400           mov ecx, 0xe48798
// 00aff6d5  e8d658c7ff           call 0x774fb0
// 00aff6da  6850b5b100           push 0xb1b550
// 00aff6df  e8113be8ff           call 0x9831f5
// 00aff6e4  59                   pop ecx
// 00aff6e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
