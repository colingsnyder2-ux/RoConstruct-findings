// from server: 100% by auto
// roc 2012-06 00aff590  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aff590
//
// 00aff590  b9008de400           mov ecx, 0xe48d00
// 00aff595  e8d628c7ff           call 0x771e70
// 00aff59a  68f0b5b100           push 0xb1b5f0
// 00aff59f  e8513ce8ff           call 0x9831f5
// 00aff5a4  59                   pop ecx
// 00aff5a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
