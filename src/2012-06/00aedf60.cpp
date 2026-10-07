// roc 2012-06 00aedf60  unit: seg_00ae0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aedf60
//
// 00aedf60  b90815e200           mov ecx, 0xe21508
// 00aedf65  e866a9a3ff           call 0x5288d0
// 00aedf6a  68f034b100           push 0xb134f0
// 00aedf6f  e88152e9ff           call 0x9831f5
// 00aedf74  59                   pop ecx
// 00aedf75  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
