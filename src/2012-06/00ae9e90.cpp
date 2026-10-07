// roc 2012-06 00ae9e90  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae9e90
//
// 00ae9e90  b91c8ae100           mov ecx, 0xe18a1c
// 00ae9e95  e8e62697ff           call 0x45c580
// 00ae9e9a  68b01bb100           push 0xb11bb0
// 00ae9e9f  e85193e9ff           call 0x9831f5
// 00ae9ea4  59                   pop ecx
// 00ae9ea5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
