// from server: 100% by auto
// roc 2012-06 00ae9d20  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9d20
//
// 00ae9d20  b96889e100           mov ecx, 0xe18968
// 00ae9d25  e8664895ff           call 0x43e590
// 00ae9d2a  68301bb100           push 0xb11b30
// 00ae9d2f  e8c194e9ff           call 0x9831f5
// 00ae9d34  59                   pop ecx
// 00ae9d35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
