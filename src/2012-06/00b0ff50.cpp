// roc 2012-06 00b0ff50  unit: seg_00b00000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b0ff50
//
// 00b0ff50  b9c46ae500           mov ecx, 0xe56ac4
// 00b0ff55  e816ead9ff           call 0x8ae970
// 00b0ff5a  687012b200           push 0xb21270
// 00b0ff5f  e89132e7ff           call 0x9831f5
// 00b0ff64  59                   pop ecx
// 00b0ff65  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
