// from server: 100% by auto
// roc 2012-06 00af0210  unit: seg_00af0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00af0210
//
// 00af0210  b9844ee200           mov ecx, 0xe24e84
// 00af0215  e8d6f7a8ff           call 0x57f9f0
// 00af021a  68b047b100           push 0xb147b0
// 00af021f  e8d12fe9ff           call 0x9831f5
// 00af0224  59                   pop ecx
// 00af0225  c3                   ret 
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??__E?lastVertexVAR@IFSModel@G3D@@0VVAR@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
