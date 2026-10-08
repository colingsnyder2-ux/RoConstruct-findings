// from server: 100% by auto
// roc 2012-06 00ae9670  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9670
//
// 00ae9670  b9b864e100           mov ecx, 0xe164b8
// 00ae9675  e846f991ff           call 0x408fc0
// 00ae967a  681015b100           push 0xb11510
// 00ae967f  e8719be9ff           call 0x9831f5
// 00ae9684  59                   pop ecx
// 00ae9685  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
