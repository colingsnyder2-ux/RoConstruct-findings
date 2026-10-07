// roc 2012-06 00ae9d60  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9d60
//
// 00ae9d60  b96089e100           mov ecx, 0xe18960
// 00ae9d65  e8c64e95ff           call 0x43ec30
// 00ae9d6a  68101bb100           push 0xb11b10
// 00ae9d6f  e88194e9ff           call 0x9831f5
// 00ae9d74  59                   pop ecx
// 00ae9d75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
