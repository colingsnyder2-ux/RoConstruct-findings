// from server: 100% by auto
// roc 2012-06 00af6260  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af6260
//
// 00af6260  b9f400e300           mov ecx, 0xe300f4
// 00af6265  e8c679beff           call 0x6ddc30
// 00af626a  68906eb100           push 0xb16e90
// 00af626f  e881cfe8ff           call 0x9831f5
// 00af6274  59                   pop ecx
// 00af6275  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
