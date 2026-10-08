// from server: 100% by auto
// roc 2012-06 00af4840  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af4840
//
// 00af4840  b914cde200           mov ecx, 0xe2cd14
// 00af4845  e8b611baff           call 0x695a00
// 00af484a  682060b100           push 0xb16020
// 00af484f  e8a1e9e8ff           call 0x9831f5
// 00af4854  59                   pop ecx
// 00af4855  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
